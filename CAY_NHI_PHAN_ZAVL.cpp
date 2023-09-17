#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    int height;

    Node(int val) {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
        this->height = 1;
    }
};

class AVLTree {
public:
    AVLTree() {
        this->root = nullptr;
    }

    void insert(int val) {
        root = insertNode(root, val);
    }

    void remove(int val) {
        root = deleteNode(root, val);
    }

    void printInorder() {
        inorderTraversal(root);
    }

private:
    Node* root;

    int height(Node* node) {
        if (node == nullptr) {
            return 0;
        }
        return node->height;
    }

    int getBalance(Node* node) {
        if (node == nullptr) {
            return 0;
        }
        return height(node->left) - height(node->right);
    }

    Node* rotateRight(Node* y) {
        Node* x = y->left;
        Node* T2 = x->right;

        x->right = y;
        y->left = T2;

        y->height = max(height(y->left), height(y->right)) + 1;
        x->height = max(height(x->left), height(x->right)) + 1;

        return x;
    }

    Node* rotateLeft(Node* x) {
        Node* y = x->right;
        Node* T2 = y->left;

        y->left = x;
        x->right = T2;

        x->height = max(height(x->left), height(x->right)) + 1;
        y->height = max(height(y->left), height(y->right)) + 1;

        return y;
    }

    Node* insertNode(Node* node, int val) {
        if (node == nullptr) {
            return new Node(val);
        }

        if (val < node->val) {
            node->left = insertNode(node->left, val);
        } else if (val > node->val) {
            node->right = insertNode(node->right, val);
        } else {
            return node;
        }

        node->height = max(height(node->left), height(node->right)) + 1;

        int balance = getBalance(node);

        if (balance > 1 && val < node->left->val) {
            return rotateRight(node);
        }

        if (balance < -1 && val > node->right->val) {
            return rotateLeft(node);
        }

        if (balance > 1 && val > node->left->val) {
            node->left = rotateLeft(node->left);
            return rotateRight(node);
        }

        if (balance < -1 && val < node->right->val) {
            node->right = rotateRight(node->right);
            return rotateLeft(node);
        }

        return node;
    }

    Node* minValueNode(Node* node) {
        Node* current = node;

        while (current->left != nullptr) {
            current = current->left;
        }

        return current;
    }

    Node* deleteNode(Node* node, int val) {
        if (node == nullptr) {
            return node;
        }

        if (val < node->val) {
            node->left = deleteNode(node->left, val);
        } else if (val > node->val) {
            node->right = deleteNode(node->right, val);
        } else {
            if (node->left == nullptr || node->right == nullptr) {
                Node* temp = node->left ? node->left : node->right;

                if (temp == nullptr) {
                    temp = node;
                    node = nullptr;
                } else {
                    *node = *temp;
                }

                free(temp);
            } else {
                Node* temp = minValueNode(node->right);
                node->val = temp->val;
                node->right = deleteNode(node->right, temp->val);
            }
        }

        if (node == nullptr) {
            return node;
        }

        node->height = max(height(node->left), height(node->right)) + 1;

        int balance = getBalance(node);

        if (balance > 1 && getBalance(node->left) >= 0) {
            return rotateRight(node);
        }

        if (balance > 1 && getBalance(node->left) < 0) {
            node->left = rotateLeft(node->left);
            return rotateRight(node);
        }

        if (balance < -1 && getBalance(node->right) <= 0) {
            return rotateLeft(node);
        }

        if (balance < -1 && getBalance(node->right) > 0) {
            node->right = rotateRight(node->right);
            return rotateLeft(node);
        }

        return node;
    }

    void inorderTraversal(Node* node) {
        if (node != nullptr) {
            inorderTraversal(node->left);
            cout << node->val << " ";
            inorderTraversal(node->right);
        }
    }
};

int main() {
    AVLTree tree;

    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.insert(40);
    tree.insert(50);
    tree.insert(25);

    cout << "cay AVL la:" << endl;
    tree.printInorder();

    tree.remove(30);

    cout << endl << "cay AVL sau khi xoa node co gia tri 30:" << endl;
    tree.printInorder();

    return 0;
}
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

struct DoublyLinkedList {
    Node* head;
    Node* tail;
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }
    void insertAtHead(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            tail = newNode;
        } else {
            head->prev = newNode;
        }
        newNode->next = head;
        head = newNode;
    }
    void insertAtTail(int value) {
        Node* newNode = new Node(value);
        if (tail == nullptr) {
            head = newNode;
        } else {
            tail->next = newNode;
        }
        newNode->prev = tail;
        tail = newNode;
    }
    void printList() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};
int main() {
    DoublyLinkedList list;
    list.insertAtHead(3);
    list.insertAtHead(2);
    list.insertAtTail(4);
    list.insertAtTail(5);
    list.printList();
    return 0;
}
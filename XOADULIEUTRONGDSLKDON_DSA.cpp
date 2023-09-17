#include<bits/stdc++.h>
using namespace std;

struct node {
	int data;
	struct node *next;//link
};

node* makeNode(int x) {
	node *newNode = new node();
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}
// kich thuoc cua dslk
int size(node *head) {
	int cnt = 0;
	while(head != NULL) {
		++cnt;
		head = head->next;
	}
	return cnt;
}

void duyet(node *head) {
	while(head != NULL) {
		cout << head->data <<" ";
		head = head->next;
	}
	cout << endl;
}

int count(node *head) {
	int dem = 0;
	while(head != NULL) {
		dem++;
		head = head->next;
	}
	return dem;
}
//// them node moi vao dau
void pushFront(node **head, int x) {
	node *newNode = makeNode(x);
	//b1: phan next cua newNode => head
	newNode->next = *head; //*head => dia chi cua node head trong dslk
	//b2: cap nhat node head => newNode
	*head = newNode;
}
void pushFront2(node *&head, int x) {
	node *newNode = makeNode(x);
	newNode->next = head;
	head = newNode;
}
//// them node moi vao cuoi dslk
void pushBack(node **head, int x) {
	node *tmp = *head;
	node *newNode = makeNode(x);
	if(*head == NULL) {
		*head = newNode;
		return;
	}
	while(tmp->next != NULL) {
		tmp = tmp->next;
	}
	//cho phan next cua node tmp => newnode
	tmp->next = newNode;
}
void pushBack2(node *&head, int x) {
	node *tmp = head;
	node *newNode = makeNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(tmp->next != NULL) {
		tmp = tmp->next;
	}
	// cho phan next cua node tmp => newnode
	tmp->next = newNode;
}
//// them node moi vao giua dslk tai vi tri thu k
void insert(node **head, int x, int k) {
	int n = size(*head);
	if(k < 1 || k > n + 1) return;
	if(k == 1) {
		pushFront(head, x);
	}
	node *tmp = *head;
	for(int i = 1; i <= k - 2; i++) {
		tmp = tmp->next;
	}
	// tmp : k - 1
	node *newNode = makeNode(x);
	newNode->next = tmp->next; //k
	tmp->next = newNode;
}
//
void insert2(node*&head, int x, int k) {
	int n = size(head);
	if(k < 1 || k > n + 1) return;
	if(k == 1) {
		pushFront2(head, x);
	}
	node *tmp = head;
	for(int i = 1; i <= k - 2; i++) {
		tmp = tmp->next;
	}
	// tmp : k - 1;
	node *newNode = makeNode(x);
	newNode->next = tmp->next;//k
	tmp->next = newNode;
}
////// xoa phan tu o dau dslk
void popFront(node **head) {
	if(*head == NULL) return;// 0 co phan tu
	node *tmp = *head;
	*head = (*head)->next;
	// giai phong
	delete tmp;
}
void popFront2(node *&head) {
	if(head == NULL) return;
	node *tmp = head;
	head = head->next;
	delete tmp;
}
///// xoa phan tu o cuoi dslk
void popBack(node **head) {
	if(*head == NULL) return;// 0 co phan tu
	node *tmp = *head;
	if(tmp->next == NULL) {
		*head = NULL;
		delete tmp;
		return;
	}
	while(tmp->next->next != NULL) {
		tmp = tmp->next;// node thu 2 tu cuoi ve
	}
	node *last = tmp->next;// node cuoi
	tmp->next = NULL;
	delete last;
}
void popBack2(node *&head) {
	if(head == NULL) return;
	node *tmp = head;
	if(tmp->next == NULL) {
		head = NULL;
		delete tmp;
		return;
	}
	while(tmp->next->next != NULL) {
		tmp = tmp->next;
	}
	node *last = tmp->next;
	tmp->next = NULL;
	delete last;
}
////// xoa 1 phan tu o vi tri k
void erase(node **head, int k){
	int n = size(*head);
	if(k < 1 || k > n) return; // ko xoa
	if(k == 1) popFront(head);
	else{
		node *tmp = *head;
		for(int i = 1; i <= k - 2; i++){
			tmp = tmp->next;
		}// tmp: k - 1
		node *kth = tmp->next;// node thu k
		// cho node (k - 1) ket noi voi node (k + 1)
		tmp->next = kth->next;
		delete kth;
	}
}
void erase2(node *&head, int k){
	int n = size(head);
	if(k < 1 || k > n) return; // ko xoa
	if(k == 1) popFront2(head);
	else{
		node *tmp = head;
		for(int i = 1; i <= k - 2; i++){
			tmp = tmp->next;
		}// tmp: k - 1
		node *kth = tmp->next;// node thu k
		// cho node (k - 1) ket noi voi node (k + 1)
		tmp->next = kth->next;
		delete kth;
	}
}


int main() {
	node *head = NULL;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		pushBack(&head, x);
	}
	int k; cin >> k;
	while(head != NULL){
		if(head->data != k){
			cout << head->data <<" ";
		}
		head = head->next;
	}
}
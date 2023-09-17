#include<bits/stdc++.h>
using namespace std;

struct Node{
	struct Node* prev;
	int data;
	struct Node* next;
};

void insert_front(struct Node** head, int new_data){
	struct Node* newNode = new Node;
	newNode->data = new_data;
	newNode->next = (*head);
	newNode->prev = NULL;
	if((*head) != NULL){
		(*head)->prev = newNode;	
	}
	(*head) = newNode;
}
void displaylist(struct Node*node){
	struct Node* last;
	while(node != NULL){
		cout << node->data<< "<==>";
		last = node;
		node = node->next;
	}
	if(node == NULL){
		cout <<"NULL";
	}
}
int main(){
	struct Node * head = NULL;
//	insert_end(&head, 40);
	insert_front(&head, 20);
//	insert_end(&head, 50);
	insert_front(&head, 10);
//	insert_after(head->next, 30);
	cout <<"DSLK kep:"<< endl;
	displaylist(head);
	return 0;
}
#include <iostream>

using namespace std;

struct node{
	int data;
	struct node *next;
};

typedef struct node node;

node *makeNode(int x){
	node *newNode = new node();
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

void push(node **queue, int x){
	node *newNode = makeNode(x);
	if(*queue == NULL){
		*queue = newNode; return;
	}
	node *temp = *queue;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
}

void pop(node **queue){
	if(*queue == NULL) return;
	node *temp = *queue;
	(*queue) = (*queue)->next;
	delete temp;
}

int size(node *queue){
	int ans = 0;
	while(queue != NULL){
		++ans;
		queue = queue->next;
	}
	return ans;
}

bool empty(node *queue){
	return queue == NULL;
}

int front(node *queue){
	return queue->data;
}

void duyet(node *queue){
	while(queue != NULL){
		cout << queue->data << ' ';
		queue = queue->next;
	}
}

int main(){
	node *queue = NULL;
	while(1){
		cout << "--------------------------------\n";
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. Front\n";
		cout << "4. Size\n";
		cout << "5. Empty\n";
		cout << "6. Duyet\n";
		cout << "0. Thoat !\n";
		cout << "--------------------------------\n";
		int lc; cout << "Nhap lua chon :"; cin >> lc;
		if(lc == 1){
			int x; cin >> x;
			push(&queue, x);
		}
		else if(lc == 2){
			pop(&queue);
		}
		else if(lc == 3){
			cout << front(queue) << endl;
		}
		else if(lc == 4){
			cout << size(queue) << endl;
		}
		else if(lc == 5){
			if(empty(queue)){
				cout << "EMPTY\n";
			}
			else 
				cout << "NOT EMPTY\n";
		}
		else if(lc == 6){
			duyet(queue);
			cout << endl;
		}
		else{
			break;
		}
	}
}


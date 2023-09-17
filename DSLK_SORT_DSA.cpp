#include <iostream>
#include <iomanip>

using namespace std;

struct SinhVien{
	string name;
	double gpa;
	SinhVien(){
	}
	SinhVien(string ten, double diem){
		name = ten;
		gpa = diem;
	}
};

struct node{
	SinhVien data;
	struct node *next;
};

typedef struct node node;

node *makeNode(SinhVien s){
	node *newNode = new node;
	newNode->data = s;
	newNode->next = NULL;
	return newNode;
}

void pushBack(node **head, SinhVien s){
	node *newNode = makeNode(s);
	if(*head == NULL){
		*head = newNode; return;
	}
	node *temp = *head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
}

void duyet(node *head){
	while(head != NULL){
		cout << head->data.name << ' ' << fixed << setprecision(2) << head->data.gpa << endl;
		head = head->next;
	}
}

void sapxep(node **head){
	for(node *i = *head; i != NULL; i = i->next){
		node *minNode = i;
		for(node *j = i->next; j != NULL; j = j->next){
			if(minNode->data.gpa > j->data.gpa){
				minNode = j;
			}
			else if(minNode->data.gpa == j->data.gpa){
				if(minNode->data.name > j->data.name){
					minNode = j;
				}
			}
		}
		SinhVien tmp = minNode->data;
		minNode->data = i->data;
		i->data = tmp;
	}
}

int main(){
	node *head = NULL;
	SinhVien s("Teo", 3.5);
	SinhVien t("Ti", 3.8);
	SinhVien u("Long", 3.5);
	SinhVien v("Hai", 3.8);
	pushBack(&head, s);
	pushBack(&head, t);
	pushBack(&head, u);
	pushBack(&head, v);
	duyet(head);
	cout << endl;
	sapxep(&head);
	duyet(head);
}


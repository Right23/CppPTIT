#include<bits/stdc++.h>
using namespace std;

struct node {
	int data;
	node *pLeft;
	node *pRight;
};
typedef node* TREE;
//khoi tao cay
void khoitaocay(TREE &t) {
	t = NULL;// cay rong
}
// them phan tu x vao cay
void themNodeVaoCay(TREE &t, int x) {
	if(t == NULL) { //cay rong
		node *p = new node;
		p->data = x;
		p->pLeft = NULL;
		p->pRight = NULL;
		t = p;
	} else { //cay co ton tai phan tu
		if(t->data > x) {
			themNodeVaoCay(t->pLeft, x);
		} else {
			if(t->data < x) {
				themNodeVaoCay(t->pRight, x);
			}
		}
	}

}
// xuat cay Nhi phan NLR
void Duyet_NLR(TREE t){
	if(t != NULL){
		cout << t->data <<" ";
		Duyet_NLR(t->pLeft);
		Duyet_NLR(t->pRight);
	}
}
// xuat cay theo NRL
void Duyet_NRL(TREE t){
	if(t != NULL){
		cout << t->data<<" ";
		Duyet_NRL(t->pRight);
		Duyet_NRL(t->pLeft);
	}
}
// xuat cay theo LNR
void Duyet_LNR(TREE t){
	if(t != NULL){
		Duyet_LNR(t->pLeft);
		cout << t->data <<" ";
		Duyet_LNR(t->pRight);
	}
}
// xuat cay theo RNL
void Duyet_RNL(TREE t){
	if(t != NULL){
		Duyet_RNL(t->pRight);
		cout << t->data <<" ";
		Duyet_RNL(t->pLeft);
	}
}
// xuat cay theo LRN
void Duyet_LRN(TREE t){
	if(t != NULL){
		Duyet_LRN(t->pLeft);
		Duyet_LRN(t->pRight);
		cout << t->data <<" ";
	}
}
// xuat cay theo RLN
void Duyet_RLN(TREE t){
	if(t != NULL){
		Duyet_RLN(t->pRight);
		Duyet_RLN(t->pLeft);
		cout << t->data <<" ";
	}
}
// nhap du lieu
void Menu(TREE &t) {
	while(1) {
		//system("cls");
		cout <<"\n\n\t\t===========MENU=========";
		cout <<"\n1. Nhap du lieu";
		cout <<"\n2. Xuat du lieu cua cay NLR";
		cout <<"\n3. Xuat du lieu cua cay NRL";
		cout <<"\n4. Xuat du lieu cua cay LNR";
		cout <<"\n5. Xuat du lieu cua cay RNL";
		cout <<"\n6. Xuat du lieu cua cay LRN";
		cout <<"\n7. Xuat du lieu cua cay RLN";
		cout <<"\n0. Ket thuc";
		cout <<"\n\n\t\t =======================";
		
		cout <<"\nNhap lua chon: ";
		int lc;
		cin >> lc;
		if(lc < 0){
			cout <<"\nLua chon k hop le";
			//system("pause");
		}
		else if(lc == 0){
			break;
		}
		else if(lc == 1){
			int x;
			cout <<"\nNhap so nguyen x: ";
			cin >> x;
			themNodeVaoCay(t, x);
		}
		else if(lc == 2){
			cout <<"\n\t\tDuyet theo NLR: ";
			Duyet_NLR(t);
			cout <<"\n";
			//system("pause");
		}
		else if(lc == 3){
			cout <<"\n\t\tDuyet theo NRL: ";
			Duyet_NRL(t);
			cout <<"\n";
			//system("pause");
		}
		else if(lc == 4){
			cout <<"\n\t\tDuyet theo LNR: ";
			Duyet_LNR(t);
			cout <<"\n";
		}
		else if(lc == 5){
			cout <<"\n\t\tDuyet theo RNL: ";
			Duyet_RNL(t);
			cout <<"\n";
		}
		else if(lc == 6){
			cout <<"\n\t\tDuyet theo LRN: ";
			Duyet_LRN(t);
			cout <<"\n";
		}
		else if(lc == 7){
			cout <<"\n\tDuyet theo RLN: ";
			Duyet_RLN(t);
			cout <<"\n";
		}
	}
}
int main(){
	TREE t;
	khoitaocay(t);
	Menu(t);
}
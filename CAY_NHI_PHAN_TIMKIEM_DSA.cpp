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
//// tim kiem phan tu x trong cay
node* timkiem(TREE t, int x){
	if(t == NULL){
		return NULL;
	}
	else{
		if(t->data > x){
			timkiem(t->pLeft, x);
		}
		else if(t->data < x){
			timkiem(t->pRight, x);
		}
		else return t;
	}
}
// tim kiem node co 2 con
void Node_co_2_con(TREE t){
	if(t != NULL){
		if((t->pLeft != NULL) && (t->pRight != NULL)){
			cout << t->data <<" ";
		}
		Node_co_2_con(t->pLeft);
		Node_co_2_con(t->pRight);
	}
	
}
// tim kiem node co 1 con
void Node_co_1_con(TREE t){
	if(t != NULL){
		if((t->pLeft != NULL && t->pRight == NULL) || (t->pLeft == NULL && t->pRight != NULL)){
			cout << t->data <<" ";
		}
		Node_co_1_con(t->pLeft);
		Node_co_1_con(t->pRight);
	}
}
// tim kiem node la
void Node_la(TREE t){
	if(t != NULL){
		if(t->pLeft == NULL && t->pRight == NULL){
			cout << t->data <<" ";
		}
		Node_la(t->pLeft);
		Node_la(t->pRight);
	}
}
// tim kiem node co gia tri LON nhat
int Node_max(TREE t){
	if(t->pRight == NULL){
		return t->data;
	}
	return Node_max(t->pRight);
}
// tim kiem node co gia tri NHO nhat
int Node_min(TREE t){
	if(t->pLeft == NULL){
		return t->data;
	}
	return Node_min(t->pLeft);
}
//// ham tim node the mang
// tim node PHAI NHAT cua cay con TRAI
void NodeTheMang_PhaiNhat_CayConTrai(TREE &X, TREE &Y){
	if(Y->pRight != NULL){
		NodeTheMang_PhaiNhat_CayConTrai(X, Y->pRight);
	}
	else{
		X->data = Y->data;// data cua node can xoa la data cua node the mang
		X= Y;// cho node X (la node ma ta se xoa sau nay) cho den node the mang
		Y = Y->pRight;// cap nhat lai moi lien ket cua node cha cua node the mang
		// va node con cua node the mang
	}
}
// tim node TRAI NHAT cua cua cay con PHAI
void NodeTheMang_TraiNhat_CayConPhai(TREE &X, TREE &Y){
	if(Y->pLeft != NULL){
		NodeTheMang_TraiNhat_CayConPhai(X, Y->pLeft);
	}
	else{
		X->data = Y->data;// data cua node can xoa la data cua node the mang
		X= Y;// cho node X (la node ma ta se xoa sau nay) tro den node the mang
		Y = Y->pRight;// cap nhat lai moi lien ket cua node cha cua node the mang
		// va node con cua node the mang
	}
}
// xoa node co 1 con
void XoaNode(TREE &t, int data){// data la gia tri cua node can xoa
	if(t == NULL){
		return;
	}
	else{
		if(data < t->data){
			XoaNode(t->pLeft, data);
		}
		else if(data > t->data){
			XoaNode(t->pRight, data);
		}
		else {
			node *X = t;// node the mang
			if(t->pLeft == NULL){
				t = t->pRight;
			}
			else if(t->pRight == NULL){
				t = t->pLeft;
			}
			else{
				NodeTheMang_PhaiNhat_CayConTrai(X, t->pLeft);
			//	NodeTheMang_TraiNhat_CayConPhai(X, t->pRight);
			}
			delete X;
		}
	}	
}
// xoay trai cay np tim kiem
TREE Rotate_left(TREE t){
	TREE P = t;
	if(t == NULL){
		//cay rong
		return P;
	}
	else if(t->pRight == NULL){
		// t k co cay con phai
		return P;
	}
	else{
		P = t->pRight;// P tro den cay con phai
		t->pRight = P->pLeft;// t tro den node trai cua P
		P->pLeft = t;
	}
	return (P);
}
// xoay trai cay np tim kiem
TREE Rotate_right(TREE t){
	TREE P = t;
	if(t == NULL){
		//cay rong
		return P;
	}
	else if(t->pLeft == NULL){
		// t k co cay con phai
		return P;
	}
	else{
		P = t->pLeft;// P tro den cay con phai
		t->pLeft = P->pRight;// t tro den node trai cua P
		P->pRight = t;
	}
	return (P);
}
// nhap du lieu
void Menu(TREE &t) {
	while(1) {
		//system("cls");
		cout <<"\n\n\t\t===========MENU=========";
		cout <<"\n1. Nhap du lieu";
		cout <<"\n2. Xuat du lieu cua cay NLR";
		cout <<"\n3. TIM KIEM phan tu x";
		cout <<"\n4. TIM KIEM node co 2 con";
		cout <<"\n5. TIM KIEM node co 1 con";
		cout <<"\n6. TIM KIEM node la";
		cout <<"\n7. TIM KIEM node co gia tri lon nhat";
		cout <<"\n8. TIM KIEM node co gia tri nho nhat";
		cout <<"\n9. Xoa node co gia tri x";
		cout <<"\n10. Xuat du lieu cua cay LNR";
		cout <<"\n11. Xuat du lieu cua cay RNL";
		cout <<"\n12. Xoay trai cay NP";
		cout <<"\n13. Xoay phai cay NP";
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
			cout <<"\n\tDuyet theo NLR: ";
			Duyet_NLR(t);
			cout <<"\n";
			//system("pause");
		}
		else if(lc == 3){
			cout <<"\nNhap phan tu can tim kiem: ";
			int x; cin >> x;
			node *p = timkiem(t, x);
			
			if(p != NULL){
				cout <<"\tYES\n";
			}
			else cout <<"\tNO\n";
		}
		else if(lc == 4){
			cout <<"\n\tCac node co 2 con: ";
			Node_co_2_con(t);
		}
		else if(lc == 5){
			cout <<"\n\tCac node co 1 con: ";
			Node_co_1_con(t);
		}
		else if(lc == 6){
			cout <<"\n\tCac node la: ";
			Node_la(t);
		}
		else if(lc == 7){
			cout <<"\n\tGia tri cua node lon nhat: "<< Node_max(t);
		}
		else if(lc == 8){
			cout <<"\n\tGia tri cua node nho nhat: "<< Node_min(t);
		}
		else if(lc == 9){
			cout <<"\n\t\tNhap gia tri cua node can xoa: ";
			int x; cin >> x;
			XoaNode(t, x);
		}else if(lc == 10){
			cout <<"\n\tDuyet theo LNR: ";
			Duyet_LNR(t);
			cout <<"\n";
		}
		else if(lc == 11){
			cout <<"\n\tDuyet theo RNL: ";
			Duyet_RNL(t);
			cout <<"\n";
		}
		else if(lc == 12){
			cout <<"\n\tXoay trai cay nhi phan tim kiem: ";
			Rotate_left(t);
		}
		else if(lc == 13){
			cout <<"\n\tXoay phai cay nhi phan tim kiem: ";
			Rotate_right(t);
		}
	}
}
int main(){
	TREE t;
	khoitaocay(t);
	Menu(t);
}
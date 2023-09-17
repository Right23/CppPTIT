#include <iostream>

using namespace std;

int a[100000], maxN = 100000;
int n = 0;

int size(){
	return n;
}


bool empty(){
	return n == 0;
}

void push(int x){
	if(n == maxN-1) return;
	a[n] = x; ++n;
}

void pop(){
	if(n == 0) return;
	for(int i = 0; i < n - 1; i++){
		a[i] = a[i + 1];
	}
	--n;
}

int front(){
	return a[0];
}

int main(){
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
			push(x);
		}
		else if(lc == 2){
			pop();
		}
		else if(lc == 3){
			cout << front() << endl;
		}
		else if(lc == 4){
			cout << size() << endl;
		}
		else if(lc == 5){
			if(empty()){
				cout << "EMPTY\n";
			}
			else 
				cout << "NOT EMPTY\n";
		}
		else if(lc == 6){
			for(int i = 0; i < n; i++){
				cout << a[i] << ' ';
			}
			cout << endl;
		}
		else{
			break;
		}
	}
}


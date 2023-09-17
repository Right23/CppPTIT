#include <bits/stdc++.h>

using namespace std;

int n = 0;
string st[10001];

void push(string x) {
	st[n] = x;
	++n;
}

void pop() {
	if(n >= 1)
		--n;
}

string top() {
	return st[n - 1];
}

int size() {
	return n;
}
void bubbleSort(int a[], int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n - i - 1; j++) {
			if(a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}
int ck(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		if(a[i] > a[i + 1]){
			return 0;// neu chua duoc sap xep
		}
	}
	return 1;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int &x : a) {
			cin >> x;
		}
		int cnt_step = 0;
		for(int i = 0; i < n - 1; i++) {
			for(int j = 0; j < n - i - 1; j++) {
				if(a[j] > a[j + 1]) {
					swap(a[j], a[j + 1]);
				}
			}
			string s = "";
			for(int j = 0; j < n; j++) {
				s = s  + to_string(a[j]);
				if(j != n - 1) s += " ";
			}
			
			push(s);
			cnt_step++;
			if(ck(a, n)){
				break;
			}
		}
		for(int i = 0; i < cnt_step; i++){
			cout <<"Buoc "<< cnt_step - i <<": ";
			cout << top() <<endl;
			pop();
		}
		// do pop het ra roi nen k can memset
		memset(st, 0, 10001);
	}
}


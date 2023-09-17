#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n) {
	for(int i = 0; i < n - 1; i++) {
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
	int  n;
	cin >> n;
	int a[n];
	for(int &x: a) cin >> x;
	for(int i = 0; i < n - 1; i++) {
		for(int j = 0; j < n - i - 1; j++) {
			if(a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
		cout <<"Buoc "<< i + 1 <<": ";
		for(int i = 0; i < n; i++) {
			cout << a[i] <<" ";
		}
		if(ck(a, n)){
			break;
		}else cout << endl;
	}
}
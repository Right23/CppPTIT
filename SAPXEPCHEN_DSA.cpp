#include<bits/stdc++.h>
using namespace std;
void insertionSort(int a[], int n){
	for(int i = 1; i < n; i++){
		int x = a[i], pos = i - 1;
		while(pos >= 0 && x < a[pos]){
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = x;
	}
}
int main(){
	int t; cin >> t; 
	int a[t]; 
	for(int &x: a) cin >> x;
	for(int i = 0; i < t; i++){
		sort(a, a + i + 1);// hoac insertionSort(a, i + 1)
		
		cout <<"Buoc "<< i <<": ";
		for(int j = 0; j <= i; j++){
			cout << a[j] <<" ";
		}
		cout << endl;
	}
}
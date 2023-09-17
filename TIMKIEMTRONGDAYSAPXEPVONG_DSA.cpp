#include<bits/stdc++.h>
using namespace std;
int linearsearch(int a[], int n, int x){
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			return i + 1;
		}
	}return -1;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[100000];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cout << linearsearch(a, n, k) << endl;
	}
}
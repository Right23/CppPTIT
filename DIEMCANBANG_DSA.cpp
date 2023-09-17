#include<bits/stdc++.h>
using namespace std;
int equilibrium(int a[], int n){
	int total_sum = 0;
	int left_sum = 0;
	for(int i = 0; i < n; i++){
		total_sum += a[i];
	}
	for(int i = 0; i < n; i++){
		total_sum -= a[i];
		int right_sum = total_sum;
		if(left_sum == right_sum){
			return i + 1;
		}
		left_sum += a[i];
	}
	return -1;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x: a){
			cin >> x;
		}
		cout << equilibrium(a, n) << endl;
	}
}
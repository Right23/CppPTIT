#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int smallestSubwithSum(int a[], int n, int x){
	int min_length = n + 1;
	for(int i = 0; i < n; i++){
		int currence_sum = a[i];
		if(currence_sum > x) return 1;
		//
		for(int j = i + 1; j < n; j++){
			currence_sum += a[j];
			if(currence_sum > x && (j - i + 1) < min_length){
				min_length = j - i + 1;
			}
		}
	}
	return min_length;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int k = smallestSubwithSum(a, n, x);
		if(k == n + 1){
			cout << -1 << endl;
		}else cout << k << endl;
	}
}
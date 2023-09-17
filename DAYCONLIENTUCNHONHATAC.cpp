#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int smallestSubwithSum(int a[],int n, int x){
	int cur_sum = 0, min_len = n + 1;
	int i = 0, j = 0;
	while(j < n){
		while(cur_sum <= x && j < n){
			cur_sum += a[j++];
		}
		//
		while(cur_sum > x && i < n){
			if(j - i < min_len){
				min_len = j - i;
			}// remove i elements
			cur_sum -= a[i++];
		}
	}
	return min_len;
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
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int &x : a) cin >> x;
		long long sum = 0;
		for(int i = 0; i < k; i++) sum += a[i];
		long long res = sum, idx = 0;
		for(int i = k; i < n; i++){
			sum += a[i] - a[i - k];
			if(sum > res){
				res = sum;
				idx = i - k + 1;
			}
		}
		for(int i = idx; i < idx + k; i++){
			cout << a[i] <<" ";
		}
		cout << endl;
	}
	return 0;
}
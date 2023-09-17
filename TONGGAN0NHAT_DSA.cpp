#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		int res = INT_MAX;
		int ans;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(abs(a[i] + a[j]) < res && i != j){
					res = abs(a[i] + a[j]);
					ans = a[i] + a[j];
				}
			}
		}
		cout << ans << endl;
	}
}
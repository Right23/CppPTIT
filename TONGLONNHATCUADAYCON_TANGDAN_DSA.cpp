#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll a[n+5];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		ll res = 0;
		ll dp[1005];
		for(int i = 0; i < n; i++){
			dp[i] = a[i];
			for(int j = 0; j < i; j++){
				if(a[i] > a[j]){
					dp[i] = max(dp[i], dp[j]+a[i]);
				}
			}
			res = max(res, dp[i]);
		}
		cout << res << endl;
	}
}
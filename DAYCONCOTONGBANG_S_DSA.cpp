#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
int main(){
//	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n, s;
		cin >> n >> s;
		int a, dp[40005] = {0};
		dp[0] = 1;
		for(int i = 1; i <= n; i++){
			cin >> a;
			for(int j = s; j >= a; j--){
				if(dp[j-a] == 1) dp[j] = 1;
			}
		}
		if(dp[s] == 1) cout << "YES\n";
		else cout <<"NO\n";
	}
	return 0;
}
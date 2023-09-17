#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll a[], ll n, ll k){
	for(ll i = 0; i < n; i++){
		cin >> a[i];
	}
	map <ll,int> m;
	bool ck = 0;
	ll sum = 0;
	for(ll i = 0; i < n; i++){
		sum += a[i];
		if(sum == k || m[sum-k] == 1){
			cout << "YES\n";
			ck = 1;
			break;
		}
		m[sum] = 1;
	}
	if(!ck) cout << "NO\n";
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n, k; cin >> n >> k;
		ll a[n];
		solve(a, n, k);
	}
}
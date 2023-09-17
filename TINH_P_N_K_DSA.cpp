#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n, k;
		cin >> n >> k;
		ll res = 1;
		if(n < k) res = 0;
		for(int i = n-k+1; i <= n; i++){
			res = (res*i) % mod;
		}
		cout << res << endl;
	}
}
#include <bits/stdc++.h>
using namespace std ;
#define ll long long

ll rev(ll n) {
	ll res = 0;
	while(n) {
		res = res*10 + n%10;
		n /= 10;
	}
	return res;
}
const ll mod = 1e9+7;
ll binPow(ll a, ll b) {
	if(b == 0) return 1;
	if(b == 1) return a % mod;
	ll x = binPow(a, b/2);
	if(b %2 == 0) return x*x % mod;
	return (x*x % mod) * a % mod;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		ll a;
		cin >> a;
		ll k = 0, b = a;
		while(b) {
			k = k*10 + b%10;
			b /= 10;
		}
		cout << binPow(a, k) << endl;
	}
}
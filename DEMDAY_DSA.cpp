#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// 2 ^ (n-1)
ll remainder(string a, ll m) {
	ll r = 0;
	for(char x : a) {
		r = r * 10 + x - '0';
		r %= m;
	}
	return r;
}
ll powMod(ll a, ll b, ll m) {
	ll res = 1;
	while(b) {
		if(b % 2 == 1) {
			res *= a;
			res %= m;
		}
		a *= a;
		a %= m;
		b /= 2;
	}
	return res;
}
int mod = 123456789;

ll binPow(ll a, ll b) {
	if(b == 0) return 1;
	if(b == 1) return a % mod;
	ll x = binPow(a, b/2);
	if(b %2 == 0) return x*x % mod;
	return (x*x % mod) * a % mod;
}
int main() {
	int t;
	cin>> t;
	while(t--) {
		ll n;
		cin >> n;
//		ll r = remainder(to_string(2), mod);
//		cout << powMod(2, n - 1, mod) << endl;
		cout << binPow(2, n-1) << endl;
	}
}
//#include<bits/stdc++.h>
//using namespace std;
//using ll = long long;
//const ll mod = 123456789;
//ll binpow(ll a, ll b){
//	if(b==0) return 1;
//	if(b==1) return a%mod;
//	ll x = binpow(a, b/2);
//	if(b%2 == 0) return x*x%mod;
//	return (x*x%mod) * a%mod;
//}
//int main(){
//	int t; cin >> t;
//	while(t--){
//		ll a; cin >> a;
//		cout << binpow(2, a-1) << endl;
//	}
//}

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
//ll remainder(char a[], ll m){
//	ll r = 0;
//	for(int i = 0; i < strlen(a); i++){
//		r = r * 10 + a[i] - '0';
//		r %= m;
//	}
//	return r;
//}
//
ll c = 1e9 + 7;
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
//int main(){
//	int t; cin >> t;
//	while(t--){
//		char a[1001];
//		 ll b, m;
//		cin  >> a >> b >> m;
//		ll r = remainder(a, m);
//		cout << powMod(r, b, m) << endl;
//	}
//}
int main() {
	int t;
	cin >> t;
	while(t--) {
		string a;
		ll b;
		cin >> a >> b;
		ll r = remainder(a, c);
		cout << powMod(r, b, c) << endl;

	}
}
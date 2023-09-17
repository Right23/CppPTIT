#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll remainder(string a, ll m){
	ll r = 0;
	for(char x : a){
		r = r * 10 + (x - '0');
		r %= 10;
	}
	return r;
}
ll binpow(ll a, ll b, ll m){
	ll res = 1;
	while(b){
		if(b % 2 == 1){
			res *= a;
			res %= m;
		}
		a *= a;
		a %= m;
		b /= 2;
	}
	return res;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string a; ll b, m;
		cin  >> a >> b >> m;
		ll r = remainder(a, m);
		cout << binpow(r, b, m) << endl;
	}
}
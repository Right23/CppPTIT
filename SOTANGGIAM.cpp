#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int snt(ll x) {
	if(x < 2) return 0;
	for(ll i = 2; i * i <= x; i++) {
		if(x % i == 0) return 0;
	}
	return 1;
}
int tang(ll x){
	while(x >= 10){
		ll n1 = x % 10;
		x /= 10;
		ll n2 = x % 10;
		if(n1 <= n2) return 0;
	}return 1;
}
int giam(ll x){
	while(x >= 10){
		ll n1 = x % 10;
		x /= 10;
		ll n2 = x % 10;
		if(n1 >= n2) return 0;
	}
	return 1;
}


int main() {
	int t;
	cin >> t;
	sieve();
	while(t--) {
		int i = 1, n;
		cin >> n;
		int dem = 0;
		ll dau = 1, cuoi = 1;
		while(i < n){
			dau *= 10;
			i++;
		}
		cuoi = dau * 10;
		for(ll i = dau; i < cuoi; i++) {
			if(tang(i) || giam(i)){
				if(snt(i)){
					dem++;
				}
			}
		}
		cout << dem << endl;
	}
}
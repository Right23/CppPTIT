#include<iostream>
#define ll long long
using namespace std ;
const ll mod = 1e9+7;
ll binPow(ll a, ll b) {
	if(b == 0) return 1;
	if(b == 1) return a % mod;
	ll x = binPow(a, b/2);
	if(b %2 == 0) return x*x % mod;
	return (x*x % mod) * a % mod;
}
int main() {
	
	while(1){
		ll a, b; cin >> a >> b;
		if(a == b && a== 0) break;
		cout << binPow(a, b) << endl;
	}
	
}


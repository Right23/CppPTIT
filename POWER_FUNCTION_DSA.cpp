#include <bits/stdc++.h>
using namespace std ;
#define ll long long
ll powMod(ll a, ll b){
	ll res = 1;
	while(b){
		if(b % 2 == 1){
			res *= a;
		}
		b /= 2;
		a *= a;
	}
	return res;
}
ll binPow(ll a, ll b){
	if(b == 0){
		return 1;
	}
	ll x = binPow(a, b/2);
	if(b %2 == 1){
		return x * x * a;
	}else return x * x;
}
int main(){
	ll a, b;
	cin >> a >> b;
	cout << powMod(a, b) << endl << binPow(a, b);
}
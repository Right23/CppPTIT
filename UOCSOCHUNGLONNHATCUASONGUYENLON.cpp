#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll find_remainder(string s, ll m){
	ll res = 0;
	for(int i = 0; i < s.length(); i++){
		res = res * 10 + s[i] - '0';
		res %= m;
	}
	return res;
}
ll gcd(ll a, ll b){
	if(b== 0)return a;
	else return gcd(b, a % b);
}
int main(){
	int t; cin >> t;
	while(t--){
		ll a; string s;
		cin >> a >> s;
		ll r = find_remainder(s, a);
		cout << gcd(r, a) << endl;
	}
}
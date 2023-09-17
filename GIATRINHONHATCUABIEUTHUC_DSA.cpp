#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//a+b>=2can(a*b)
void solve(ll a[], ll n, ll b[]){
	sort(a, a+n);
	sort(b, b+n, greater<ll>());
//	sort(b, b+n, less<ll>());
	ll s = 0;
	for(ll i = 0; i < n; i++){
		s += a[i]*b[i];
	}
	cout << s << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n;cin >>n;
		ll a[n], b[n];
		for(ll &x: a) cin >> x;
		for(ll &x: b) cin >> x;
		solve(a, n, b);
	}
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a, ll b) {
	if(b == 0) {
		return a;
	} else {
		return gcd(b, a % b);
	}
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		ll a, x, y;
		cin >> a >> x >> y;
		ll tmp = gcd(x, y);
		for(int i = 1; i <= tmp; i++) {
			cout << a << "";
		}
		cout << endl;
	}
}
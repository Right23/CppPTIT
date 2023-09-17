#include<bits/stdc++.h>
using namespace std;
void tn(long long x) {
	long long s = x;
	long long rev = 0;
	int r;
	while(x > 0) {
		r = x % 10;
		rev = rev * 10 + r;
		x /= 10;
	}
	bool ok = true;
	if(s != rev) ok = false;
	if(ok) {
		cout << "YES" << endl;
	} else cout << "NO" << endl;
}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		long long n;
		cin >> n;
		tn(n);
	}
}
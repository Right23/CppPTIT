#include<bits/stdc++.h>
using namespace std;

bool ck() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	set <int> se;
	for(int i = 0; i < k; i++) {
		if(se.count(a[i])) return true;
		else se.insert(a[i]);
	}
	for(int i = k; i < n; i++) {
		se.erase(a[i - k]);
		if(se.count(a[i])) return true;
		se.insert(a[i]);
	}
	return false;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		if(ck()) {
			cout << "YES\n";
		} else {
			cout <<"NO\n";
		}
	}
}
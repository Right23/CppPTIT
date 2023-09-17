#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int &x : a) {
			cin >> x;
		}
		int x, k;
		cin >> k >> x;
//		if(x > a[n - 1]) {
//			a[n] = x;
//			n++;
//		}
		auto l = lower_bound(a, a + n, x) - a;
		if(a[l] == x) {
			for(int i = l - k/2; i < l; i++) {
				if(i < 0) {
					cout <<"0 ";
				} else cout << a[i] <<" ";
			}
			for(int i = l + 1; i <= l + k/2; i++) {
				if(i < n) {
					cout << a[i] <<" ";
				} else cout << "0 ";
			}
			cout << endl;
		}
	}
}
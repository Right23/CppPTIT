#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		long a[n];
		multiset <int> se;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			se.insert(a[i]);
		}
		int ck = 0;
		for(int i = 0; i < n; i++) {
			for(int j = i + 1; j < n; j++) {
				long tmp = sqrt(a[i] * a[i] + a[j] * a[j]);
				long ok = a[i] * a[i] + a[j] * a[j];
				if(tmp * tmp == ok) {
					if(se.find(tmp) != se.end()) {
						ck = 1;
						break;
					}
				}
			}
		}
		if(ck) {
			cout <<"YES\n";
		} else cout << "NO\n";
	}
}
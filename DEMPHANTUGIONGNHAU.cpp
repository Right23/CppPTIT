#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n][n];
		map <int, int> mp, mp1;
		set <int> se[n];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		for(int i = 0; i <= 0; i++) {
			for(int j = 0; j < n; j++) {
				mp[a[i][j]] = 1;
			}
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(mp[a[i][j]] == 1) {
					se[i].insert(a[i][j]);
				}
			}
		}
		for(int i = 1; i < n; i++) {
			for(int x : se[i]) {
				mp[x]++;
			}
		}
		int c = 0;
		for(int x : se[0]) {
			if(mp[x] == n) {
				c++;
			}
		}
		cout << c << endl;
	}
}
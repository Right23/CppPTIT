#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int m, n;
		cin >> m >> n;
		int a[m][n];
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		int h1 = 0, c1 = 0;
		int h2 = m - 1, c2 = n - 1;
		while(h1 <= h2 && c1 <= c2) {
			for(int i = c1; i <= c2; i++) {
				cout << a[h1][i] << " ";
			}
			h1++;
			if(h1 <= h2 && c1 <= c2) {
				for(int i = h1; i <= h2; i++) {
					cout << a[i][c2] << " ";
				}
				c2--;
			}

			if(h1 <= h2 && c1 <= c2) {

				for(int i = c2; i >= c1; i--) {
					cout << a[h2][i] << " ";
				}
				h2--;
			}
			if(h1 <= h2 && c1 <= c2) {

				for(int i = h2; i >= h1; i--) {
					cout << a[i][c1] << " ";
				}
				c1++;
			}
		}
		cout << endl;
	}
}
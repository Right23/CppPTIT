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
		int b[m * n], k = 0;
		while(h1 <= h2 && c1 <= c2) {
			for(int i = c1; i <= c2; i++) {
				b[k] =  a[h1][i];
				k++;
			}
			h1++;
			if(h1 <= h2 && c1 <= c2) {
				for(int i = h1; i <= h2; i++) {
				b[k] =	a[i][c2];
					k++;
				}
				c2--;
			}

			if(h1 <= h2 && c1 <= c2) {

				for(int i = c2; i >= c1; i--) {
					 b[k] = a[h2][i] ;
					k++;
				}
				h2--;
			}
			if(h1 <= h2 && c1 <= c2) {

				for(int i = h2; i >= h1; i--) {
					b[k] = a[i][c1];
					k++;
				}
				c1++;
			}
		}
		for(int i = k - 1; i >= 0; i--) {
			cout << b[i] <<" ";
		}
		cout << endl;
	}
}
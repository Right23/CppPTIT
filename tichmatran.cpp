#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int m, n, p;
		cin >> m >> n >> p;
		int a[m][n], b[n][p];
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		for(int j = 0; j < n; j++){
			for(int k = 0; k < p; k++){
				cin >> b[j][k];
			}
		}
		int c[m][p];
		for(int i = 0; i < m; i++){
			for(int j = 0; j < p; j++){
				c[i][j] = 0;
				for(int k = 0; k < n; k++){
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		for(int i = 0; i < m; i++){
			for(int j = 0; j < p; j++){
				cout << c[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	cout << endl;
}

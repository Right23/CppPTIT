u#include<bits/stdc++.h>
using namespace std;
//f[i][j][k]: do dai xau con chung dai nhat
//cua s1, s2, s3 tinh den ki tu thu
// i cua xau s1
// j cua xau s2
// k cua xau s3
int f[105][105][105];
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m, l;
		string s1, s2, s3;
		cin >> n >> m >> l >> s1 >> s2 >> s3;

		memset(f, 0, sizeof(f));
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= m; j++) {
				for(int k = 1; k <= l; k++) {
					if(s1[i-1] == s2[j-1] && s1[i-1] == s3[k-1]) {
						f[i][j][k] = f[i-1][j-1][k-1] + 1;
					} else {
						f[i][j][k] = max(f[i-1][j][k], max(f[i][j-1][k], f[i][j][k-1]));
					}
				}
			}
		}
		cout << f[n][m][l] << endl;
	}
	return 0;
}
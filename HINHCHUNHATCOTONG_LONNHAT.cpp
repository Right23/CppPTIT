#include<bits/stdc++.h>
using namespace std;
int kadane(int a[], int n) {
	int cnt = 0;
	int max_end_here = 0, res = 0;
	for(int i = 0; i < n; i++) {
		max_end_here += a[i];
		res = max(res, max_end_here);
		max_end_here = max(0, max_end_here);
	}
	return res;
}
void solve() {
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	int res = INT_MIN;
	int tmp[n];//  tmp[i] : tong cac phan tu tren dong thu i
	for(int l = 0; l < m; l++) {
		for(int i = 0; i < n; i++){
			tmp[i] = 0;
		}
// wa     memset(tmp, 0, n);
		for(int r = l; r < m; r++) {
			for(int i = 0; i < n; i++) {
				tmp[i] += a[i][r];
			}
			res = max(res, kadane(tmp, n));
		}
	}
	cout << res << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
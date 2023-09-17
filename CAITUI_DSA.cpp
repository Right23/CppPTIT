#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second


int dp[1005][1005];
//dp[i][j] la gia tri lon nhat khi chon den goi hang
// thu i va the tich toi da co the mang duoc la j
int n, v;
pair <int, int> a[1005];
void solve() {
	int res=0;
	cin >> n >> v;
	for(int i = 1; i <= n; i++) cin >> a[i].fi;
	for(int i = 1; i <= n; i++) cin >> a[i].se;
// n=15 v=10

//5 2 1 3 5 2 5 8 9 6 3 1 4 7 8 the tich
//1 2 3 5 1 2 5 8 7 4 1 2 3 2 1 gia tri

//dp[i][j] la gia tri lon nhat khi chon den goi hang
// thu i va the tich toi da co the mang duoc la j
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= v; j++) {
			if(j < a[i].fi) {
				dp[i][j] = dp[i-1][j];
			} else {
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-a[i].fi] + a[i].se);
			}
			res = max(res, dp[i][j]);
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
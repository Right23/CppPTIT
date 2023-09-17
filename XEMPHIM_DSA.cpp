#include<bits/stdc++.h>
using namespace std;
int dp[1001][25001];
// goi dp[i][j] la khoi luong lon nhat khi chon
//den con bo thu i va khoi luong toi da la j
//dp[i][j] = max(dp[i-1][j], dp[i-1][j-a[i]] + w)

int main() {
//	int t; cin >> t;
//	while(t--){
	int w, n;
	cin >> w >> n;
	int a[n+5];
	for(int i = 1; i <= n; i++) cin >> a[i];
	memset(dp, 0, sizeof(dp));
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= w; j++) {
			if(j >= a[i]) {
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-a[i]] + a[i]);
			} else dp[i][j] = dp[i-1][j];
		}
	}
//		for(int i = 1; i <= n; i++){
//			cout << i <<"." << endl;
//			for(int j = 1; j <= w; j++){
//				cout <<"dp["<<i<<"]["<<j<<"]="<< dp[i][j] <<"  ";
//			}
//			cout << endl;
//		}
	cout << dp[n][w] << endl;
//	}
	return 0;
}
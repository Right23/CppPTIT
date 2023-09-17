#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int dp[n+5];
		// dp[i] la so cach it nhat de phan tich so N
		// thanh cac so nho hon ma tong binh phuong bang N
		for(int i = 0; i <= n; i++) {
			dp[i] = i;
			// cac so deu co the bang tong N binh phuong
			// cac so 1
		}

		for(int i = 1; i <= n; i++) {
			for(int j = 1; j*j <= i; j++) {
				dp[i] = min(dp[i], dp[i-j*j] + 1);
			}
//			cout <<"dp["<<i<<"]="<< dp[i] << endl;
		}
		cout << dp[n] << endl;
	}
}
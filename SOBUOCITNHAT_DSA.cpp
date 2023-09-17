#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;
//// tim doan con tang dai nhat (co the co 
//cac phan tu bang nhau)
int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x: a) cin >> x;
//		int dp[n], M = -1;
//		for(int i = 0; i < n; i++){
//			dp[i] = 1;
//			for(int j = 0; j < i; j++){
//				if(a[j] <= a[i]){
//					dp[i] = max(dp[i], dp[j] + 1);
//				}
//			}
//			M = max(M, dp[i]);
//		}
//		cout << n - M << endl;
		int lis[n];
		lis[0] = 1;
		for(int i = 1; i < n; i++){
			lis[i] = 1;
			for(int j = 0; j < i; j++){
				if(a[i] >= a[j] && lis[i] < lis[j] + 1){
					lis[i] = lis[j] + 1;
				}
			}
		}
		cout << n - *max_element(lis, lis + n) << endl;
		
	}
	return 0;
}

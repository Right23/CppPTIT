#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	while(t--) {
		int n;
		int a[101];
		cin>>n;
		long long tong=0;
		for(int i =1 ; i <= n; i++) {
			cin>>a[i];
			tong += a[i];
		}
		if(tong %2 != 0) cout<<"NO"<<endl;
		else {
			long long k = tong/2;
			int dp[10001] = {0};
			dp[0]=1;
			for(int i = 1; i<= n; i++) {
//				dp[a[i]] = 1;
				for(int j = k ; j >= a[i] ; j--) {
					if(dp[j-a[i]]==1) dp[j]=1;
				}
			}
			if(dp[k]==1) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
}
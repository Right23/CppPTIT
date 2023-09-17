# include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n+5];
		for(int i=0; i<n; i++) {
			cin>>a[i];
		}
		int res = -99999;
		for(int i = n - 1; i > 0; i--){
			for(int j = i - 1; j >= 0; j--){
				res = max(res, a[i] - a[j]);
			}
		}
		cout<< res <<endl;
	}
}
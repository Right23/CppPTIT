#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin >> n;
		int p;
		cin>>p;
		int ans = 0;
		int tmp = p;
		while(tmp <= n) {
			ans += n/tmp;
			tmp = tmp * p;
		}
		cout << ans << endl;
	}
}
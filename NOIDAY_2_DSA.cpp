#include <bits/stdc++.h>
#include <vector>
using namespace std;
long long mod = 1e9+7;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x: a) cin >> x;
		priority_queue <int, vector<int>, greater<int>> p;
		for(int x: a){
			p.push(x);
		}
		long long ans = 0;
		while(p.size() > 1){
			long long tmp = p.top(); p.pop();
			tmp += p.top(); p.pop();
			if(tmp >= mod) tmp %= mod;
			ans += tmp;
			if(ans >= mod) ans %= mod;
			p.push(tmp);
		}
		cout << ans << endl;
	}
}
#include <bits/stdc++.h>
#include <vector>
using namespace std;
//long long mod = 1e9+7;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x: a) cin >> x;
		priority_queue <int, vector<int>, greater<int>> p;
//		priority_queue <int, vector<int>, less<int>> p;
		for(int x: a){
			p.push(x);
		}
		long long ans = 0;
		while(p.size() > 1){
			long long top1 = p.top(); p.pop();
			long long top2 = p.top(); p.pop();
			ans  += top1 + top2;
			p.push(top1 + top2);
		}
		cout << ans << endl;
	}
}
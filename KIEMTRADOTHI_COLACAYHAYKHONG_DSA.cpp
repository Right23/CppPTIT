#include<bits/stdc++.h>
using namespace std;
int parent[1005];
int n, m;
vector<pair<int,int>> vp;
void make_set() {
	for(int i = 1; i <= n; i++) {
		parent[i] = i;
	}
}
int find_parent(int v) {
	if(v == parent[v]) return v;
	return parent[v] = find_parent(parent[v]);
}
bool check(vector<pair<int, int>> vp) {
	for(pair<int,int> it: vp) {
		int a = find_parent(it.first);
		int b = find_parent(it.second);
		if(a == b) return false;
		parent[b] = a;
	}
	return true;
}
void solve() {
	vp.clear();
	cin >> n;
	make_set();
	for(int i = 1; i <= n-1; i++) {
		int x, y;
		cin >> x >> y;
		vp.push_back({x, y});
	}
	if(check(vp)) {
		cout <<"YES\n";
	} else cout <<"NO\n";
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
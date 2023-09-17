#include<bits/stdc++.h>
using namespace std;
int n, m, s, t;
vector <int> dske[1001];
bool visited[1001];
int connect[1001], pos = 1;

void input() {
	cin >> n >> m;
	memset(connect, 0, sizeof(connect));
	for(int i = 1; i <= n; i++) {
		dske[i].clear();
		visited[i] = false;
	}
	for(int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;
		dske[x].push_back(y);
		// dthi co huong thi pushback 1 lan
		dske[y].push_back(x);
	}
}
void dfs(int u) {
	// danh dau s va t co cung thuoc 1 tplt hay ko
	connect[u] = pos;
	// danh dau la dinh u da duoc tham
	visited[u] = true;
	for(int v: dske[u]) {
		// neu dinh v chua duoc tham
		if(!visited[v]) {
			dfs(v);
		}
	}
}
void connectedComponent(int s, int t) {
	for(int i = 1; i <= n; i++) {
		if(!visited[i]) {
			dfs(i);
			pos++;
		}
	}
	if(connect[s] == connect[t]) {
		cout <<"YES\n";
	} else cout  <<"NO\n";
}
//<< connect[s] <<" "<< connect[t]<<" "

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		input();
		int q; cin >> q;
		while(q--) {
			cin >> s >> t;
			connectedComponent(s, t);
		}
	}
}
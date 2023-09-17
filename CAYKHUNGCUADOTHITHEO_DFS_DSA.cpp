#include<bits/stdc++.h>
using namespace std;

int n, m, u; // so dinh, canh cua dske
vector <int> dske[1001];
bool visited[10001];
vector<pair<int, int>> T;// tree
void input() {
	T.clear();
	cin >> n >> m >> u;
	for(int i = 1; i <= n; i++) {
		dske[i].clear();
		visited[i] = false;
	}
	for(int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;
		dske[x].push_back(y);
		// do thi co huong thi chi pushback 1 lan
		dske[y].push_back(x);
	}
}
void dfs(int u) {
	// danh dau la dinh u da duoc tham
	visited[u] = true;
	for(int v: dske[u]) {
		// neu dinh v chua duoc tham
		if(!visited[v]) {
			T.push_back({u, v});
			dfs(v);
		}
	}
}
void solve(){
	memset(visited, false, sizeof(visited));
//	vector<pair<int, int>> T;// tree
	int U = u;
	dfs(U);
	if(T.size() != n-1){
		cout <<-1<< endl;
	}else {
		for(auto it: T){
			cout << it.first <<" "<< it.second << endl;
		}
	}
	
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		input();
		solve();
	}
}

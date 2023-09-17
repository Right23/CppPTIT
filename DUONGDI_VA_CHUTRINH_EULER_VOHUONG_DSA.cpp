#include<bits/stdc++.h>
using namespace std;
int n, m;
set<int> dske[1001];
int deg[1001];
bool visited[1001];
void input() {
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		dske[i].clear();
		visited[i] = false;
	}
	memset(deg, 0, sizeof(deg));
	for(int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;
		dske[x].insert(y);
		dske[y].insert(x);
		deg[x]++;
		deg[y]++;
	}
}
// kiem tra do thi co lien thong hay khong
void dfs(int u) {
	visited[u] = true;
	for(int v: dske[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}
bool checkConnected(){
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			dem++;
			dfs(i);
		}
	}
	if(dem == 1){
		return true;
	}
	else return false;
}

// check so dinh bac le

void check() {
	int cnt = 0;// dem so dinh bac le
	bool ck = true;
	for(int i = 1; i <= n; i++) {
		if(deg[i] % 2 == 1) {
			cnt++;
		}
	}
	if(cnt == 2) {
		cout << 1 << endl;
	} else if(cnt == 0) {
		cout << 2 << endl;
	} else cout << 0 << endl;
}
void solve(){
	if(checkConnected()){
		check();
	}else cout << 0 << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		input();
		solve();
	}
}
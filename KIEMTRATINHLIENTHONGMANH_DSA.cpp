#include<bits/stdc++.h>
using namespace std;
int n, m;
vector <int> dske[1001];
bool visited[1001];

void input() {
	cin >> n >> m;
    for(int i = 1; i <= n; i++){
        dske[i].clear();
        visited[i] = false;
    }
	for(int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;
		dske[x].push_back(y);
		// dthi co huong thi pushback 1 lan
//		dske[y].push_back(x);
	}
}
void dfs(int u){
//	cout << u <<" ";
	// danh dau la dinh u da duoc tham
	visited[u] = true;
	for(int v: dske[u]){
		// neu dinh v chua duoc tham
		if(!visited[v]){
			dfs(v);
		}
	}
}
void connectedCmponent() {
	int ans = 0;
	for(int i = 1; i <= n; i++) {
		if(!visited[i]) {
			ans++;
			dfs(i);
		}
	}
	if(ans == 1){
		cout <<"YES\n";
	}else cout <<"NO\n";
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		input();
		connectedCmponent();
	}
}
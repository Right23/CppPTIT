#include<bits/stdc++.h>
using namespace std;
// input dang dske
//9 9
//1 2
//1 3
//1 5
//2 4
//3 6
//3 7
//3 9
//5 8
//8 9
int n, m, u; // so dinh, canh cua dske
vector <int> dske[1001];
bool visited[10001];
void input() {
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
	cout << u <<" ";
	// danh dau la dinh u da duoc tham
	visited[u] = true;
	for(int v: dske[u]) {
		// neu dinh v chua duoc tham
		if(!visited[v]) {
			dfs(v);
		}
	}
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		input();
		dfs(u);
		cout << endl;
	}
}

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
		dske[y].push_back(x);
	}
}
void bfs(int u) {
	// khoi tao
	queue <int> q;
	q.push(u);
	visited[u] = true;
	// lap
	while(!q.empty()) {
		int v = q.front();
		q.pop();
//		cout << v <<" "; line 30 44
		for(int x: dske[v]) {
			if(!visited[x]) {
				q.push(x);
				visited[x] = true;
			}
		}
	}
}
void connectedCmponent() {
	int ans = 0;
	for(int i = 1; i <= n; i++) {
		if(!visited[i]) {
			ans++;
//			cout << "cac dinh thuoc tplt thu i: ";
			bfs(i);
		}
	}
	cout << ans << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		input();
		connectedCmponent();
	}
}
#include<bits/stdc++.h>
using namespace std;

/////////// neu bo test thi phai clear dske
int n, m, s, t; // so dinh, canh cua dske
vector <int> dske[1001];
int parent[1001];
bool visited[10001];
void input() {
	cin >> n >> m >> s >> t;
//		memset(visited, false, sizeof(visited));
//		memset(parent, 0, sizeof(parent));
	for(int i = 1; i <= n; i++) {
		dske[i].clear();
		visited[i] = false;
		parent[i] = 0;
	}
	for(int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;
		dske[x].push_back(y);
		// do thi co huong thi chi pushback 1 lan
//		dske[y].push_back(x);
	}
}
void bfs(int u){
	// khoi tao
	queue <int> q;
	q.push(u);
	visited[u] = true;
	// lap
	while(!q.empty()){
		int v = q.front();
		q.pop();
//		cout << v <<" ";
		for(int x: dske[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
				parent[x] = v;
			}
		}
	}
}
void findPath(int s, int t) {
	bfs(s);
	if(!visited[t]) {
		cout << -1 << endl;
	} else {
		// truy vet duong di
		vector <int> path;
		// bat dau tu dinh t
		while( t != s) {
			path.push_back(t);
			t = parent[t];
		}
		path.push_back(s);
		reverse(path.begin(), path.end());
		for(int x: path) {
			cout << x <<" ";
		}
		cout << endl;
	}

}
int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		input();
		findPath(s, t);
	}
}

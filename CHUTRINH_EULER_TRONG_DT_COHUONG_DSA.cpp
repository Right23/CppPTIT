#include<bits/stdc++.h>
using namespace std;
int n, m;
set<int> dske[1001];
// moi dinh deu co ban bac ra = ban bac vao
int degout[1001];
int degin[1001];
bool visited[1001];
void input() {
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		dske[i].clear();
		visited[i] = false;
	}
	memset(degin, 0, sizeof(degin));
	memset(degout, 0, sizeof(degout));
	for(int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;
		dske[x].insert(y);
//		dske[y].insert(x);
		degout[x]++;
		degin[y]++;
	}
}

void dfs(int u) {
	visited[u] = true;
	for(int v: dske[u]) {
		if(!visited[v]) {
			dfs(v);
		}
	}
}

void check() {
	bool ck = true;
	for(int i = 1; i <= n; i++) {
		if(degout[i] != degin[i]) {
			ck = false;
			break;
		}
	}
	if(ck) {
		cout << 1 << endl;
	} else cout << 0 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		input();
		check();
	}
}
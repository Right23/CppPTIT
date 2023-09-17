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
	int dem1 = 0;// dem so cap (s, v) deg+-
	int dem2 = 0;// dem so dinh s khac (#) co deg bang nhau
//	bool ck = true;
	for(int i = 1; i < n; i++) {
		if(degout[i] == degin[i]) dem2++;
		for(int j = i+1; j <= n; j++){
			if((degout[i] - degin[i] == 1) && (degin[j] - degout[j] == 1)
			|| (degout[j] - degin[j] == 1) && (degin[i] - degout[i] == 1)){
				dem1++;
			}
		}
	}
	if((dem1 == 1) && (dem2 == n-2)){
		cout <<"La do thi nua Euler\n";
	}else cout <<"Khong la do thi nua Euler"
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		input();
		check();
	}
}
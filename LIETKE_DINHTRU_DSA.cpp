#include<bits/stdc++.h>
using namespace std;
int n, m;
vector <int> dske[1001];
bool visited[1001];

void input() {
	cin >> n >> m;
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
	memset(visited, false, sizeof(visited));
}
void dfs(int u) {
	visited[u] = true;
	for(int v: dske[u]) {
		if(!visited[v]) {
			dfs(v);
		}
	}
}
void dinhtru() {
	int tplt = 0;// so tplt ban dau cua do thi
	for(int i = 1; i <= n; i++) {
		if(!visited[i]) {
			tplt++;
//			cout <<"cac dinh thuoc thanh phan lien thong thu i: ";
			dfs(i);
		}
	}
	int ans = 0;// so dinh tru
	for(int i = 1; i <= n; i++) {
		memset(visited, false, sizeof(visited));
		visited[i] = true; // loai bo dinh i
		// tuc la khong cho dfs xet den dinh i;
		int dem = 0;// dem so tplt khi loai bo dinh i
		for(int j = 1; j <= n; j++) {
			if(!visited[j]) {
				dem++;
				dfs(j);
			}
		}
		if(dem > tplt) {
			cout << i <<" ";
			ans++;
		}
	}
//	cout <<"\n"<< ans ;
	cout << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		input();
		dinhtru();
	}
}

#include<bits/stdc++.h>
using namespace std;
//test case
//2
//5 5
//1 2 
//1 3
//2 3
//2 5
//3 4
int n, m;
vector <int> dske[1001];
bool visited[1001];
vector<pair<int,int>> dscanh;
void input() {
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		dske[i].clear();
        visited[i] = false;
	}
	dscanh.clear();
	for(int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;
		dske[x].push_back(y);
		// dthi co huong thi pushback 1 lan
		dske[y].push_back(x);
		dscanh.push_back({x, y});
	}
//	memset(visited, false, sizeof(visited));
}
void dfs(int u){
	visited[u] = true;
	for(int v: dske[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}
void dfs2(int u, int s, int t){
	visited[u] = true;
	for(int v: dske[u]){
		// khong xet canh s-t, t-s;
		if((u == s && v == t) || (u == t && v == s)) continue;
		if(!visited[v]) dfs2(v, s, t);
	}
}
void canhcau(){
	int ans = 0;// so canh cau
	int tplt = 0; // so tplt ban dau
	memset(visited, false, sizeof(visited));
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			tplt++;
			dfs(i);
		}
	}
	// xet cac canh trong ds canh
	for(auto it : dscanh){
		int x = it.first, y = it.second;
		memset(visited, false, sizeof(visited));
		int dem = 0;// so tplt khi bo di canh x-y, y-x
		for(int j = 1; j <= n; j++){
			if(!visited[j]){
				dem++;
				dfs2(j, x, y);
			}
		}
		if(dem > tplt){
			cout << x <<" "<< y <<" ";
			ans++;
		}
	}
//	cout << ans << endl;
	cout << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		input();
		canhcau();
	}
}
//test case
//5 5
//
//1 2 
//
//1 3
//
//2 3
//
//2 5
//
//3 4
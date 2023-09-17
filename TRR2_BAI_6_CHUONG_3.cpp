#include<bits/stdc++.h>
using namespace std;
//13
//0 1 1 1 0 0 0 0 0 0 0 0 0 
//1 0 1 1 0 0 0 0 0 0 0 0 0  
//1 1 0 1 1 0 0 0 0 0 0 0 0 
//1 1 1 0 0 0 0 0 0 0 0 0 0 
//0 0 1 0 0 1 1 1 1 0 0 0 0 
//0 0 0 0 1 0 1 0 1 0 0 0 0
//0 0 0 0 1 1 0 1 0 0 0 0 0
//0 0 0 0 1 0 1 0 1 0 0 0 0
//0 0 0 0 1 1 0 1 0 1 0 0 0
//0 0 0 0 0 0 0 0 1 0 1 1 1
//0 0 0 0 0 0 0 0 0 1 0 1 1 
//0 0 0 0 0 0 0 0 0 1 1 0 1
//0 0 0 0 0 0 0 0 0 1 1 1 0
int n;
int a[1001][1001]; // ma tran ke
vector <int> dske[1001];
bool visited[1001];
vector<pair<int,int>> dscanh;
void input() {
	cin >> n;
	for(int i = 1; i <= n; i++) {
		dske[i].clear();
        visited[i] = false;
	}
	dscanh.clear();
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	// chuyen mtr ke sang dske, dscanh
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j] == 1){
				dske[i].push_back(j);
			}
			if(a[i][j] == 1 && i < j){
				dscanh.push_back({i, j});
			}
		}
	}
}
void dfs(int u){
	visited[u] = true;
	for(int v: dske[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}
// ham dfs khong xet canh s-t, t-s
void dfs2(int u, int s, int t){
	visited[u] = true;
	for(int v: dske[u]){
		// khong xet canh s-t, t-s;
		if((u == s & v == t) || (u == t && v == s)) continue;
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
	cout <<"Cac canh cau la:\n";
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
			cout << x <<" "<< y << endl;
			ans++;
		}
	}
	cout <<"Co tat ca "<< ans <<"canh cau "<< endl;
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


#include<bits/stdc++.h>
using namespace std;
int n, m;
vector <int> dske[1001];
bool visited[1001];
int parent[1001];
void input(){
	cin >> n >> m;
	memset(visited, false, sizeof(visited));
	for(int i = 1; i <= n; i++){
		dske[i].clear();
	}
// 	memset(parent, 0, sizeof(parent));
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		dske[x].push_back(y);
		dske[y].push_back(x);
	}
}
bool dfs(int u, int par){
	visited[u] = true;
	for(int v: dske[u]){
		if(!visited[v]){
			if(dfs(v, u)) return true;
			// return dfs(v, u) se chi chay duoc 1 nhanh
			// neu sai se chay den line 38
			
			// neu dung mang parent thi
//			parent[v] = u;
//			if(dfs(v)) return true;
		}
		else if(v != par){
		// neu dung mang parent
//		else if(v != parent[u])
			return true;
		}
	}
	return false;   
}
int main(){
	int t; cin >> t;
	while(t--){
		input();
		// neu do thi da lien thong
//		if(dfs(1, 0)){
//			cout <<"YES\n";
//		}else cout <<"NO\n";
		
		// neu do thi k lien thong thi xet tat ca
		int flag = 0;
		for(int i = 1; i <= n; i++){
			if(!visited[i]){
				if(dfs(i, 0)){
					cout <<"YES\n";
					flag = 1;
					break;
				}
			}
		}
		if(!flag) cout <<"NO\n";
	}
	return 0;
}
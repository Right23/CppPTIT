#include<bits/stdc++.h>
using namespace std;
int n, m;
vector <int> dske[1001];
int color[1001];
void input(){
	cin >> n >> m;
	memset(color, 0, sizeof(color));
	for(int i = 1; i <= n; i++){
		dske[i].clear();
	}
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		dske[x].push_back(y);
	}
}
bool dfs(int u){
	color[u] = 1;// xam
	for(int v: dske[u]){
		if(color[v] == 0){// trang
			if(dfs(v)) return true;
		}
		else if(color[v] == 1) return true;	
	}
	color[u] = 2;// den
	return false;
}
int main(){
	int t; cin >> t;
	while(t--){
		input();
		int flag = 0;
		for(int i = 1; i <= n; i++){
			if(color[i] == 0){
				if(dfs(i)){
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
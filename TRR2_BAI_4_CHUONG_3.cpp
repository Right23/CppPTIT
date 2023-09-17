#include<bits/stdc++.h>
using namespace std;
//13
//0 0 0 0 0 1 0 0 0 0 0 0 0
//0 0 1 0 0 0 0 1 0 0 0 0 0
//0 0 0 0 0 0 0 0 1 0 0 0 1
//1 0 0 0 0 1 0 0 0 0 0 0 0
//0 0 0 0 0 0 1 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0 1 0 1 0
//0 0 0 0 0 0 0 0 0 0 1 0 1
//0 0 0 1 0 0 0 0 0 0 0 1 0
//0 0 0 0 1 0 1 0 0 0 0 0 0
//0 1 1 0 0 0 0 0 0 0 0 0 0
//0 1 0 0 0 0 0 1 0 0 0 0 0
//0 0 0 1 0 0 0 0 0 1 0 0 0
//0 0 0 0 0 0 0 0 1 0 1 0 0


int a[1001][1001];
bool visited[1001];
vector <int> dske[1001];
int n;
// chuyen ma tran ke sang danh sach ke
void input() {
	cin >> n;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(a[i][j] == 1) {
				dske[i].push_back(j);
			}
		}
	}
}

void dfs(int u) {
	// danh dau la dinh u da duoc tham
	visited[u] = true;
	for(int v: dske[u]) {
		// neu dinh v chua duoc tham
		if(!visited[v]) {
			dfs(v);
		}
	}
}
// do thi lien thong manh neu so tplt = 1
// ->xay dung ham dem so tplt
void connectedCmponent() {
	int ans = 0;
	for(int i = 1; i <= n; i++) {
		if(!visited[i]) {
			ans++;
			dfs(i);
		}
	}
	if(ans == 1) {
		cout <<"DO THI LIEN THONG MANH\n";
	} else cout <<"DO THI KHONG LIEN THONG MANH, VI CO "<< ans <<"TPLT\n";
}
int main() {
	input();
	connectedCmponent();
}
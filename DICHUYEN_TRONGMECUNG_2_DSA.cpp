#include<bits/stdc++.h>
using namespace std;

int n, a[1001][1001];
vector<string> res;
bool ck = false;
bool visited[1001][1001];
void Try(int i, int j, string s) {
	if(a[1][1] == 0) {
		ck = false;
//		return;
	}
	// kiem tra co di den dc o cuoi cung hay k
	if(i == n && j == n && a[n][n] == 1) {
		res.push_back(s);
		ck = true;
//		return;
	}

	if(i < n && a[i+1][j] && !visited[i+1][j]) {
		visited[i][j] = true;
		Try(i+1, j, s+"D");
		visited[i][j] = false;
	}
	if(j < n && a[i][j+1] && !visited[i][j+1]) {
		visited[i][j] = true;
		Try(i, j + 1, s+"R");
		visited[i][j] = false;
	}
	if(j > 1 && a[i][j-1] == 1 && !visited[i][j-1]) {
		visited[i][j] = true;
		Try(i, j-1, s+"L");
		visited[i][j] = false;
	}
	if(i > 1 && a[i-1][j] && !visited[i-1][j]) {
		visited[i][j] = true;
		Try(i-1, j, s+"U");
		visited[i][j] = false;
	}
}

void solve() {
	cin >> n;
	memset(visited, false, sizeof(visited));
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	res.clear();
	ck = false;
	Try(1, 1, "");
	if(ck) {
		sort(begin(res), end(res));
		for(string x: res) cout << x <<" ";
	} 
	else cout <<-1;
	cout << endl;
}


int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
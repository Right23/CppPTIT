#include<bits/stdc++.h>
using namespace std;

int n, a[1001][1001];
vector<string> res;
bool ck = false;
void input() {
	cin >> n;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	res.clear();
	ck = false;
}

void Try(int i, int j, string s) {
	if(a[1][1] == 0) {
		ck = false;
		return;
	}
	// kiem tra co di den dc o cuoi cung hay k
	if(i == n && j == n && a[n][n] == 1) {
		res.push_back(s);
		ck = true;
		return;
	}
	
	if(i < n && a[i+1][j]) {
		Try(i+1, j, s+"D");
	}
	if(j < n && a[i][j+1]) {
		Try(i, j + 1, s+"R");
	}
	if((i < n && j < n && !a[i+1][j] && !a[i][j+1]) || i > n || j > n) {
		return;
	}
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		input();
		Try(1, 1, "");
		if(ck) {
			sort(begin(res), end(res));
			for(string x: res) cout << x <<" ";
		} else cout <<-1;
		cout << endl;
	}
}
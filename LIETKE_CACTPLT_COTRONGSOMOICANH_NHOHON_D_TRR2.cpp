// xin loi co nhom e chi liet ke ra duoc cac tplt thoa man cac canh nho hon d thoi
//
#include<bits/stdc++.h>
using namespace std;
int a[1001][1001];
bool visited[1001];
vector <int> dske[1001];
int n, d;
// chuyen ma tran ke sang danh sach ke
void input() {
	for(int i = 1; i <= n; i++) {
		dske[i].clear();
		visited[i] = false;
	}
	cin >> n >> d;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(a[i][j] != 0) {
				dske[i].push_back(j);
			}
		}
	}
}
vector<string> vect;
void dfs(int u) {
	vect.push_back(to_string(u));
	// danh dau la dinh u da duoc tham
	visited[u] = true;
	for(int v: dske[u]) {
		// neu dinh v chua duoc tham va trong so canh (u, v) nho hon d
		if(a[u][v] <= d && !visited[v]) {
			dfs(v);
		}
		else if(a[u][v] > d) vect.clear();
	}
}
void connectedCmponent() {
	int ans = 0;// so tplt co cac canh nho hon d
	for(int i = 1; i <= n; i++) {
		if(!visited[i]) {// neu dinh i chua xet
			dfs(i);
			if(vect.size() > 1) {// neu tplt tu dinh i khong co canh co trong so lon hon so d cho truoc
				ans++;
				cout <<"thanh phan lien thong thu "<<ans<<": ";
				for(auto x: vect) cout << x <<" ";
				cout << endl;
			}

		}
		vect.clear();			
	}
	if(ans == 0) cout <<"khong co thanh phan lien thong nao thoa man"<< endl;
}
//input: voi n = 5, d = 7, 10, ...
//5 7
//0 3 4 0 0
//3 0 0 0 0
//4 0 0 0 0
//0 0 0 0 9
//0 0 0 9 0
//
//5 10
//0 7 3 0 0
//7 0 0 0 0
//3 0 0 0 0
//0 0 0 0 9
//0 0 0 9 0
int main() {
	int t;
	cin >> t;
	while(t--) {
		input();
		double t = 0;// thoi gian chay
		clock_t start = clock();
		connectedCmponent();
		clock_t end = clock();
		t = (double)(end-start)/CLOCKS_PER_SEC;
		cout <<"thoi gian chay:"<< t << endl;
	}
}
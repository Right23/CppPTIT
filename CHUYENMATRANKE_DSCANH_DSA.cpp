#include<bits/stdc++.h>
using namespace std;
// chuyen tu ma tran ke-> ds ke, dscanh
int a[1000][1000];
int main() {
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	//
	vector<pair<int, int>> dscanh;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(a[i][j] == 1 && i < j) { // tranh lap lai
				dscanh.push_back({i, j});
			}
		}
	}
	cout << n <<" "<< dscanh.size() << endl;
	for(pair<int,int> x: dscanh) {
		cout << x.first <<" "<< x.second << endl;
	}
}
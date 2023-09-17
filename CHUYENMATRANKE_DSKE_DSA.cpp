#include<bits/stdc++.h>
using namespace std;
// chuyen tu ma tran ke-> ds ke, dscanh
int a[1001][1001];
int main() {
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	//
//	vector<pair<int, int>> dscanh;
	vector<int> dske[1001];
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(a[i][j] == 1) {
				dske[i].push_back(j);
			}
		}
	}
//	cout << n << endl;
//	int dem = 0;
	for(int i = 1; i <= n; i++){
//		dem += dske[i].size();
//		cout << dem  << ": ";
		for(int x: dske[i]){
			cout << x <<" ";
		}
		cout << endl;
	}
}
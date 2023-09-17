#include<bits/stdc++.h>
using namespace std ;
int main() {
	int t ;
	cin>> t ;
	while(t--) {
		int n, m; cin >> n >> m;
		int a[n][m];
		multiset <int> ms;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
				ms.insert(a[i][j]);
			}
		}
		for(auto x : ms){
			cout << x << " ";
		}
		cout << endl;
	}
}
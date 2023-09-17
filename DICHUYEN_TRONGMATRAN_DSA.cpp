#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll P = 1e9 + 7;
//c[i][j] luu to hop chap j cua i
ll c[1005][1005];
void ktao(){
	for(int i = 0; i < 1005; i ++){
		for(int j = 0; j <= i; j++){
			if(i == j || j == 0){
				c[i][j] = 1;
			}
			else{
				c[i][j] = (c[i-1][j-1] + c[i-1][j]) % P;
			}
		}
	}
}
int main(){
	ktao();
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		
		cout << c[n+m-2][n-1] << endl;
	}return 0;
}
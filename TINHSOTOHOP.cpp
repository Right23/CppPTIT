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
		int n, r; cin >> n >> r;
		cout << c[n][r] << endl;
	}return 0;
}
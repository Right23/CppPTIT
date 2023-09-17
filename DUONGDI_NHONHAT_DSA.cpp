#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n][m];
		int F[n][m];
		memset(F, 0, sizeof(F));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
			
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(i == 0 && j == 0) F[i][j] = a[i][j];
				else if(i == 0){
					F[i][j] = a[i][j] + F[i][j-1];
				}
				else if(j == 0){
					F[i][j] = a[i][j] + F[i-1][j];
				}
				else{
					F[i][j] = a[i][j] + min(F[i-1][j-1], min(F[i-1][j], F[i][j-1]));
				}
			}
		}
		cout << F[n-1][m-1] << endl;
	}
	return 0;
}
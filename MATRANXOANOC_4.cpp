#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	int b[n * n], k = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			b[k] = a[i][j];
			k++;
		}
	}
	sort(b, b + k);
	int h1 = 0, h2 = n - 1;
	int c1 = 0, c2 = n - 1;
	k = 0;
	while(h1 <= h2 && c1 <= c2){
		for(int i = c1; i <= c2; i++){
			a[h1][i] = b[k];
			k++;
		}
		h1++;
		for(int i = h1; i <= h2; i++){
			a[i][c2] = b[k];
			k++;
		}
		c2--;
		for(int i = c2; i >= c1; i--){
			a[h2][i] = b[k];
			k++;
		}
		h2--;
		for(int i = h2; i >= h1; i--){
			a[i][c1] = b[k];
			k++;
		}
		c1++;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
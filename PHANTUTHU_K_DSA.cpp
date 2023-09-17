#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int m, n, k;
		cin >> m >> n >> k;
		int a[m], b[n];
		for(int &x: a) cin >> x;
		for(int &x: b) cin >> x;
		int c[m + n];
		int i = 0, j = 0, l = 0;
		while(i < m && j < n){
			if(a[i] <= b[j]){
				c[l] = a[i];
				i++;
			}else{
				c[l] = b[j];
				j++;
			}
			l++;
		}
		cout << c[k - 1] << endl;
	}
}
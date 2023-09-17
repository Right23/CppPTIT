#include<bits/stdc++.h>
using namespace std ;


int main() {
	int t ;
	cin>> t ;
	while(t--) {
		int n, x;
		cin >> n >> x;
		int a[n];

		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int ck = 0;
		for(int i = 0; i < n; i++){
			if(x == a[i]){
				cout << i + 1 << endl;
				ck = 1;break;
			}
		}
		if(!ck) cout <<"NO\n";
	}
}
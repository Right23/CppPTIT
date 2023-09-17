#include<bits/stdc++.h>
using namespace std ;
int main() {
	int t ;
	cin>> t ;
	while(t--) {
		int n, x; cin >> n >> x;
		int a[n];
		
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int ck = 0;
		int ans ;
		for(int i = 0; i < n; i++){
			if(a[i] == x){
				ck = 1;
				ans = i;
				break;
			}
		}
		if(ck){
			cout << ans + 1 << endl;
		}else cout << "-1" << endl;
	}
}
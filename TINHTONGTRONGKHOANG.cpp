#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, q; cin >> n >> q;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		while(q--){
			int l, r;
			cin >> l >> r;
			int s = accumulate(a + l - 1, a + r, 0);
			cout << s << endl;
		}
	}
}
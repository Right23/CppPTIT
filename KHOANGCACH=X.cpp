#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int &x : a){
			cin >> x;
		}
		sort(a, a + n);
		int ck = 0;
		map <int, int> mp;
		for(int i = n - 1; i >= 0; i--){
			mp[a[i] - x] = 1;
		}
		for(int i = 0; i < n; i++){
			if(mp[a[i]] == 1){
				ck = 1;
			}
		}
		if(ck){
			cout << 1 << endl;
		}else cout << -1 << endl;
	}
}
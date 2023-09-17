#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n;
		long k;
		cin >> n >> k;
		long a[n];
		map <long, long> mp;
		for(long &x : a){
			cin >> x;
			mp[x]++;
		}
		long cnt = 0;// l moi ac int wa
		for(int i = 0; i < n; i++){
			cnt += mp[k - a[i]];
			if(k == 2 * a[i]) cnt--;
		}
		cout << cnt/2 << endl;
	}
}
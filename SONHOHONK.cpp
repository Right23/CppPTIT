#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		int d = 0;// dem so luong ptu <= k;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] <= k) d++;
		}
		// dem trong o co d ptu co nhieu nhat la bao nhieu so <= k;
		int cnt = 0; 
		for(int i = 0; i < d; i++){
			if(a[i] <= k) cnt++;
		}
		int ans = cnt;
		for(int i = d; i < n; i++){
			if(a[i - d] <= k) cnt--;
			if(a[i] <= k) cnt++;
			ans = max(ans, cnt);
		}
		cout << d - ans << endl;
	}
	return 0;
}
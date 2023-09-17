#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>> t;
	while(t--){
		int n; cin >> n;
		int l = INT_MAX, r = INT_MIN;
		int cnt[100001] = {0};
		for(int i = 0; i < n - 1; i++){
			int x; cin >> x;
			l = min(l, x);
			r = max(r, x);
			cnt[x] = 1;
		}
		for(int i = 1; i <= r; i++){
			if(cnt[i] == 0){
				cout << i <<endl;
				break;
			}
		}
	}
}

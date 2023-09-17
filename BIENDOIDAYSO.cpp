#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x : a){
			cin >> x;
		}
		int l = 0, r = n - 1;
		int cnt = 0;
		while(l < r){
			if(a[l] < a[r]){
				l++;
				a[l] += a[l - 1];
				cnt++;
			}
			else if(a[l] > a[r]){
				r--;
				a[r] += a[r + 1];
				cnt++;
			}else{
				l++; r--;
			}
		}
		cout << cnt << endl;
	}
}
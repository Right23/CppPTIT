#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll gt[100];
void init(){
	gt[0] = 1;
	for(int i = 1; i <= 100; i++){
		gt[i] = i * gt[i - 1];
	}
}
//ll gt(int a){
//	if(a > 0){
//		return a * gt(a - 1);
//	}else return 1;
//}
// find R + G + B || R >= r, G >= g, B >= b
void solve(){
	int n, g, r, b;
	cin >> n >> g >> r >> b;
	ll res = 0;
	for(int R = n; R >= r; R--){
		for(int G = n - R; G >= g; G--){
			int B = n - R - G;
			if(B >= b){
				res += gt[n] / (gt[R] * gt[G] * gt[B]);
			}
		}
	}
	cout << res << endl;
}
int main(){
	init();
	int t; cin >> t;
	while(t--){
		solve();
	}
}
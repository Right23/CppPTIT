#include<bits/stdc++.h>
using namespace std;
using ll = long long;
// day co chieu dai 2^n - 1
ll FullLength(int n){
	if(n == 0) return 1;
	if(n == 1) return 2;
	ll p = FullLength(n/2);
	if(n % 2 == 1) return 2 * p * p;
	return p * p;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n;
		ll k;
		cin >> n >> k;
		// lay mot nua chieu dai
		ll len = FullLength(n)/2;
		while(1){
//			if(n == 1){
//				cout << 'A' << endl;break;
//			}
			if(len == k){
				cout << char(n + 64) << endl;break;
			}
			if(k > len){
				k = len - (k - len);
				
			}
			n--;
			len /= 2;
		}
	}
	return 0;
}
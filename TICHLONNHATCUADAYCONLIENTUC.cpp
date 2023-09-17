#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll maxSubProduct(ll a[], int n){
	ll res = a[0];
	for(int i = 0; i < n; i++){//tmp Product = P
		ll P  = a[i];
		for(int j = i + 1; j < n; j++){
			P *= a[j];
			//update res for each subarray from i to j;
			res = max(res, P);
		}
	}
	return res;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cout << maxSubProduct(a, n) << endl;
	}
}
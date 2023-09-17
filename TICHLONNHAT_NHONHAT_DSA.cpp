#include<bits/stdc++.h>
using namespace std;
long long Prd(long a[], int n, long b[], int m){
	sort(a, a + n, greater<int>());
	sort(b, b + m);
	return a[0] * b[0];
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		long a[n], b[m];
		for(long &x: a) cin >> x;
		for(long &x: b) cin >> x;
		cout << Prd(a, n, b, m) << endl;
	}
	
}
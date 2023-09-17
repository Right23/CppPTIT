#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(int a[], int n){
	ll ans = 0;
	for(int i = 0; i < n; i++){
		ans += a[i] + abs(a[i]);
	}
	cout << ans;
}
int main(){
	int n; cin >> n;
	int a[n];
	for(int &x: a) cin >> x;
	solve(a, n);
}
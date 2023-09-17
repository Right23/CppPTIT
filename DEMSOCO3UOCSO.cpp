#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int snt(ll x){
	if(x < 2) return 0;
	for(int i = 2; i * i <= x; i++){
		if(x % i == 0) return 0;
	}return 1;
}
int us(ll n){
	int cnt = 0;
	for(ll i = 2; i * i <= n; i++){
		if(snt(i)){
			cnt++;
		}
	}return cnt;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		cout << us(n)<< endl;
	}
}
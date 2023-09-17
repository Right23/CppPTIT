#include<bits/stdc++.h>
using namespace std;

bool ck(){
	int n, k, t; cin >> n >> k >> t;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	multiset <int> ms;
	for(int j = 0; j < k; j++){
		// kiem tra trong ms co phan tu a[i] >= a[j] - t;
		auto it = ms.lower_bound(a[j] - t);
		if(it != ms.end() && *it <= a[j] + t){
			return true;
		}
		else ms.insert(a[j]);
	}
	//
	for(int j = k; j < n; j++){
		ms.erase(ms.find(a[j - k]));
		auto it = ms.lower_bound(a[j] - t);
		if(it != ms.end() && *it <= a[j] + t){
			return true;
		}
	}
	return false;
}
int main(){
	int test; cin >> test;
	while(test--){
		if(ck()){
			cout <<"YES\n";
		}
		else cout <<"NO\n";
	}
}
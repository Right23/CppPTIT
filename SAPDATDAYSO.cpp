#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long a[n];
		multiset <long long> ms;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			ms.insert(a[i]);
		}
		long long b[n] ;
		for(long long &x : b){
			x = - 1;
		}
		for(auto x : ms){
			for(int i = 0; i < n; i++){
				if(x == i){
					b[i] = x;
				}
				
			}
		}
		for(int i = 0; i < n; i++){
			cout << b[i] <<" ";
		}cout << endl;
	}
}
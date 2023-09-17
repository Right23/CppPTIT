#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int b[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b + n);
		for(int i = 0; i < n; i++){
			auto res = upper_bound(b, b + n, a[i]);
			if(res != b + n){
				cout << *res << " ";
			}else cout <<"_ ";
		}
		cout << endl;
	}
}
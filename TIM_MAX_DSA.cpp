#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		const long long M = 1e9 + 7;
		int n; cin >> n;
		int a[n];
		for(int &x :a){
			cin >> x;
		}
		sort(a, a + n);
		long long s = 0;
		for(int i = 0; i < n; i++){
			s += i * a[i];
			s %= M;
		}
		cout << s  << endl;
	}
}
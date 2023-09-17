#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n];
		multiset <int> mts;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mts.insert(a[i]);
		}
		for(auto it : mts){
			cout << it <<" ";
		}
		cout << endl;
	}
}
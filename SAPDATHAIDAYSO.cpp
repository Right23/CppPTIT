#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		map <int, int> mp;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			mp[a[i]]++;
		}
		for(int i = 0; i < m; i++) {
			cin >> b[i];
		}
		for(int i = 0; i < m; i++) {
			for(auto it : mp) {
				if(b[i] == it.first) {
					for(int i = 0; i < it.second; i++){
						cout << it.first <<" ";
					}
					mp[it.first] = 0;
				}
			}
		}
		for(auto it : mp){
			if(it.second != 0){
				for(int i = 0; i < it.second; i++){
					cout << it.first <<" ";
				}
			}
		}
		cout << endl;
	}
}
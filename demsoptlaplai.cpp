#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		cin >> s;
		map<char, int> mp;
		for(auto x : s){
			mp[x]++;
		}
		for(auto it : mp){
			if(it.second == 1){
				cout << it.first ;
			}
		}
		cout << endl;
	}
}
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		bool ok = true;
		for(auto x : s){
			if(x != '0' && x != '6' && x != '8'){
				ok = false;
				break;
			}
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
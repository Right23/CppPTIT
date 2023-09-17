#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		int k;
		cin >> s >> k ;
		set<char> se;
		for(char x : s){
			se.insert(x);
		}
		if(se.size() + k >= 26){
			cout << '1' << endl;
		}else cout << '0' << endl;
	}
}
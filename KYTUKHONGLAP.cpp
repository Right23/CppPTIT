#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		cin >> s;
//		unordered_map<char,int> mp;
		for(int i = 0; i <s.length() ; i++) {
			bool ck = true;
			for(int j = 0; j < s.length(); j++) {
				if(s[i] == s[j] && i != j) {
					ck = false;
				}
			}
			if(ck){
				cout << s[i];
			}
		}
		cout << endl;
	}
}
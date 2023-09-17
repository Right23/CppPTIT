#include<bits/stdc++.h>
using namespace std;
bool stn(string s){
	int n = s.size();
	for(int i = 0; i <= n / 2; i++ ){
		if(s[i] != s[n - i - 1] || (s[i] - '0') % 2 == 1){
			return false;
		}
	}return true;
}
int main() {
	set<string>se;
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin, s);
		if(stn(s)){
			cout << "YES\n";
		}else cout << "NO\n";
	}
}
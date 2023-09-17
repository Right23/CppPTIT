#include<bits/stdc++.h>
using namespace std;

void solve( string s) {
	int ck = 0;
	if( s[5] < s[6] && s[6] < s[7] && s[9] < s[10] && s[7] <s[9]) ck = 1;
	if((s[7] == '6' || s[7] == '8' )&& (s[5] == '6' || s[5] == '8') && (s[6] == '6' || s[6] == '8') &&(s[9] == '6' || s[9] == '8') && (s[10] == '6' || s[10] == '8')) ck = 1;
	if(s[6] == s[5]  && s[6] == s[7] && s[9] == s[10]) ck = 1;
	if(ck){
		cout << "YES\n";
	}else cout << "NO\n";
}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		cin >> s;
		solve(s);
	}
}
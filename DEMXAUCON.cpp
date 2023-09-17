#include<bits/stdc++.h>
using namespace std;

using ll = long long;
string sum(string s){
	ll tong = 0;
	for(char x : s){
		tong += x -'0';
	}return to_string(tong);
}
string SUM(string s){
	while(s.length() > 1){
		s = sum(s);
	}return s;
}
int main(){
	int t; cin >> t; cin.ignore();
	while(t--){
		string s; cin >> s;
		if(SUM(s) == "9"){
			cout << 1<< endl;
		}else cout << 0<< endl;
	}
}
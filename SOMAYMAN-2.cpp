#include<bits/stdc++.h>
using namespace std;

using ll = long long;
string sum2(string s){
	if(s.length() == 1){
		return s;
	}else{
		ll c = 0;
		for(char x: s){
			c += x - '0';
		}s = to_string(c);
		return sum2(s);
	}
}
//string sum(string s){
//	ll tong = 0;
//	for(char x : s){
//		tong += x -'0';
//	}return to_string(tong);
//}
//string SUM(string s){
//	while(s.length() > 1){
//		s = sum(s);
//	}return s;
//}
int main(){
	int t; cin >> t; cin.ignore();
	while(t--){
		string s; cin >> s;
		if(sum2(s) == "9"){
			cout << 1<< endl;
		}else cout << 0<< endl;
	}
}
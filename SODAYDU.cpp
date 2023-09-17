#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int ck = 1;
		set <char> se;
		for(int i = 0; i < s.length(); i++){
			if(!isdigit(s[i]) || s[0] == '0' ){
				ck = 0;
				break;
			}
			else se.insert(s[i]);
		}
		if(!ck) {
			cout << "INVALID\n";		
		}
		else if(se.size()== 10){
			cout << "YES\n";
		}else cout << "NO\n";
	}
}

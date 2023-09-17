#include<bits/stdc++.h>
using namespace std;
void solve(){
	stack <char> st;
	string s; cin >> s;
	// KIEM TRA THU TU NGOAC {[()]}
//	for(int i = 0; i < s.length() - 1; i++){
//		if(s[i] == '(' && s[i + 1] == '['){
//			cout <<"NO\n";
//			return;
//		}
//		else if(s[i] == '(' && s[i + 1] == '{'){
//			cout <<"NO\n";
//			return;
//		}
//		else if(s[i] == '[' && s[i + 1] == '{'){
//			cout <<"NO\n";
//			return;
//		}
//	}
	for(char x : s){
		if(x == '(' || x == '[' || x == '{'){
			st.push(x);
		}else{
			if(st.empty()){
				cout <<"NO\n";
				return;
			}else{
				if(x == ')' && st.top() == '('){
					st.pop();
				}
				else if(x == ']' && st.top() == '['){
					st.pop();
				}
				else if(x == '}' && st.top() == '{'){
					st.pop();
				}
			}
		}
	}
	if(!st.empty()){
		cout <<"NO\n";
	}else cout <<"YES\n";
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
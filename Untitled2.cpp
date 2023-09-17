#include<bits/stdc++.h>
using namespace std;
bool solve() {
	string s; cin >> s;
	stack<char> st;
	for(int i = 0; i < s.size(); i++) {
		if((s[i]==')' && st.top() == '(')
		|| (s[i]==']' && st.top()== '[')
		|| (s[i]=='}' && st.top()=='{')){
			st.pop();
		}else{
			st.push(s[i]);
		}
	}
	if(!st.empty()) {
		return false;

	}return true;
}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		if(solve()){
			cout <<"true\n";
		}else cout <<"false\n";
	}
}
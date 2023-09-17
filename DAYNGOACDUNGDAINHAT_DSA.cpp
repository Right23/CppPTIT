#include<bits/stdc++.h>
using namespace std;
void solve() {
	int max_len = 0;	
	stack <int> st;
	st.push(-1);
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == '(') {
			st.push(i);
		} else {
			if(!st.empty()) {
				st.pop();
			}
			if(!st.empty()){
				max_len = max(max_len, i - st.top());
			}else{
				st.push(i);
			}
		}
	}
	cout << max_len << endl;
}

int main() {
	int t;
	cin >> t;

	while(t--) {
		solve();
	}
}

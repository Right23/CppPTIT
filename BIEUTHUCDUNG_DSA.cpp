#include<bits/stdc++.h>
#define ll long long
#define sz size()
#define ept empty()
#define top top()
#define pop pop()
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		stack <char> st;
		int xoa = 0, res = 0;
//		2
//		[]][][
//		[][][]
		for(int i = 0; i < s.sz; i++) {
			if(st.ept) {
				st.push(s[i]);
			} 
			else if(st.top == '[' && s[i] == ']') {
				st.pop;
				xoa += 2;
			} 
			else if(st.top == ']' && s[i] == '[') {
				res += st.sz + xoa;
				st.pop;
			} 
			else if(s[i] == '[') {
				st.push(s[i]);
			} 
			else if(st.top == ']' && s[i] == ']') {
				st.push(s[i]);
			}
			if(st.ept) xoa = 0;
		}
		cout << res << endl;
	}
}
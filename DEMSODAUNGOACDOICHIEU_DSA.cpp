#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack <char> st;
		int cnt = 0;
		for(char x : s){
			if(x == '('){
				st.push(x);
			}else{
				if(!st.empty()){
					st.pop();
				}else{
					st.push(x);
					cnt++;
				}
			}
		}
		cout << st.size()/2 + cnt << endl;
	}
}

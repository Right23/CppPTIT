#include<bits/stdc++.h>
using namespace std;
void solve(){
	stack <char> st;
	int cnt = 0;
	string s; cin >> s;
	for(char x : s){
		if(x == '('){
			st.push(x);
		}else{
			if(!st.empty()){
				st.pop();
				cnt++;
			}
		}
	}
	cout << cnt*2 << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
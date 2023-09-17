#include<bits/stdc++.h>
using namespace std;
void solve(){
	stack <char> st;
	string s; cin >> s;
	for(char x : s){
		if(x == '('){
			st.push(x);
		}else{
			if(st.empty()){
				cout <<"INVALID\n";
				return;
			}else{
				st.pop();
		}
	}
	if(!st.empty()){
		cout <<"INVALID\n";
	}else cout <<"VALID\n";
}
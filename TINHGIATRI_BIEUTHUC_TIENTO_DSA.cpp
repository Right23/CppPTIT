#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	string s; cin >> s;
	stack<ll> st;
	for(int i = s.size()-1; i >= 0; i--){
		if(s[i] == '+'||s[i] == '-'||s[i]=='*'||
		s[i]=='/'|| s[i]=='%'||s[i]=='^'){
			ll a = st.top(); st.pop();
			ll b = st.top(); st.pop();
			ll tmp ;
			if(s[i]=='+') tmp = a+b;
			else if(s[i]=='-') tmp = a-b;
			else if(s[i]=='*') tmp = a*b;
			else if(s[i]=='/') tmp = a/b;
			else if(s[i]=='%') tmp = a%b;
			else if(s[i]=='^'){
				tmp = pow(a, b);
			}
			st.push(tmp);
		}
		else st.push((ll)(s[i]-'0'));
	}
	cout << st.top() << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
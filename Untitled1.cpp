#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	int n; cin >> n;
	cin.ignore();
	stack <ll> st;
//	string k, word, s; getline(cin, k);
//	stringstream ss(k);
//	while(ss >> word){
//		s = s + word;
//	}
	string s[n];
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}
	
	for(int i = 0; i < n; i++){
		if(s[i]=='+'||s[i]=='-'||s[i]=='*'||
		s[i]=='/'||s[i]=='%'||s[i]=='^'){
			ll b = st.top(); st.pop();
			ll a = st.top(); st.pop();
			ll tmp;
			if(s[i]=='+') tmp = a+b;
			else if(s[i]=='-') tmp = a-b;
			else if(s[i]=='*') tmp = a*b;
			else if(s[i]=='/') tmp = a/b;
			else if(s[i]=='%') tmp = a%b;
			else if(s[i]=='^') tmp = pow(a, b);
			st.push(tmp);
		}
		else st.push((ll)(s[i] -'0'));
	}
	cout << st.top() << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
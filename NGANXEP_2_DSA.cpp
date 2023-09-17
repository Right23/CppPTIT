#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	stack<ll> st;
	string s;
	while(cin >> s){
		ll n;
		if(s == "PUSH"){
			cin >> n;
			st.push(n);
		}
		else if(s == "POP"){
			if(!st.empty()){
				st.pop();
			}
		}
		else if(s == "PRINT"){
			if(!st.empty()){
				cout << st.top() << endl;
			}else cout <<"NONE"<< endl;
		}
	}
}
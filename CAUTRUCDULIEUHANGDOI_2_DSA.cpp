#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	queue <int> q;
	string s;
	while(t--) {
		cin >> s;
		if(s == "PUSH"){
			int x; cin >> x;
			q.push(x);
		}else if(s == "POP"){
			if(!q.empty()){
				q.pop();
			}
		}else if(s == "PRINTFRONT"){
			if(q.empty()){
				cout <<"NONE\n";
			}else cout << q.front() << endl;
		}
	}
}

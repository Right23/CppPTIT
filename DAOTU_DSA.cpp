#include<bits/stdc++.h>
using namespace std;
void reverse() {
	string s;
	getline(cin, s);
	stack <string> st;
	string word;
	stringstream ss (s);
	while(ss >> word) {
		st.push(word);
	}
	while(!st.empty()) {
		cout << st.top();
		st.pop();
		if(!st.empty()) {
			cout <<" ";
		}
	}
	cout << endl;
}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		reverse();
	}
}
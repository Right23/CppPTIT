#include<bits/stdc++.h>
using namespace std;

void solve(string s) {
	int sum = 0;
	multiset <char> se;
	for(char x : s){
		if(isalpha(x)){
			se.insert(x);
		}else{
			sum += x - '0';
		}
	}
	for(auto x : se){
		cout << x;
	}cout << sum << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		solve(s);
	}
}
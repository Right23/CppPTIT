#include<bits/stdc++.h>
using namespace std;

bool ck(string s){
	if(s.size() < 2) return false;
	string t = s;
	reverse(all(s));// s.begin, s.end;
	return t == s;
}
int main(){
	auto cmp = [](const string a, const string b){
		return (a.size() != b.size() ? a.size() > b.size() : a > b);
	};
	map <string, int, decltype(cmp)> mp(cmp);
	string s;
	while(cin >> s){
		if(ck(s)) mp[s]++;
	}
	for(auto it : mp){
		cout << it.first <<" "<< it.second << endl;
	}
}
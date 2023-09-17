#include<bits/stdc++.h>
using namespace std;
map <string, int> mp;
string lower(string s){
	for(int i = 0; i < s.length(); i++){
		s[i] = tolower(s[i]);
	}
	return s;
}
void em2(string s){
	string word;
	vector <string> v;
	stringstream ss (s);
	string res = "";
	while(ss >> word){
		v.push_back(lower(word));
	}
	res += v[v.size() - 1];
	for(int i = 0; i < v.size() - 1; i++){
		res += v[i][0];
	}
	if(mp.find(res) == mp.end()){
		cout << res << "@ptit.edu.vn\n";
	}
	else cout << res << mp[res] + 1 << "@ptit.edu.vn\n";
	mp[res]++; 
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; getline(cin, s);
		em2(s);
	}
}
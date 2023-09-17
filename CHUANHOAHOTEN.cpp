#include <bits/stdc++.h>
using namespace std;
string chuan(string s){
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.length(); i++){
		s[i] = tolower(s[i]);
	}
	return s;
}
string upper(string s) {
	for(int i = 0; i < s.length(); i++){
		s[i] = toupper(s[i]);
	}return s;
}

int main() {
	string s,word;
	getline(cin,s);
	vector<string> a;
	stringstream ss(s);
	while(ss>>word) {
		a.push_back(word);
	}
	int n = a.size();
	for(int i=0; i<n-1; i++) {
		cout<<chuan(a[i]);
		if(i < n - 2){
			cout << " ";
		}
	}
	cout << ", ";
	cout << upper(a[n - 1]);
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
string lower(string a) {
	for(int i=0; i<a.length(); i++) {
		a[i]=tolower(a[i]);
	}
	return a;
}
int main() {
	string s,word;
	getline(cin,s);
	vector<string> a;
	stringstream ss(s);
	while(ss>>word) {
		a.push_back(lower(word));
	}
	int n = a.size();
	cout<<(a[n-1]);
	for(int i=0; i<n-1; i++) {
		cout<<(a[i][0]);
	}
	cout<<"@ptit.edu.vn";
	return 0;
}
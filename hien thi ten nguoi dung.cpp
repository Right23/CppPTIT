#include<bits/stdc++.h>
#include<map>
using namespace std;
int main() {
	int t;
	cin>>t;
	cin.ignore();
	map<string,int> mp;
	string s;
	while(t--) {
		getline(cin,s);
		string word;
		stringstream ss(s);
		while(ss>>word) {
			mp[word]++;
		}
	}

	for(auto it: mp) {
		for(int i=0; i<it.second; i++) {
			if(i==0) {
				cout<<it.first<<endl;
			} else {
				cout<<it.first<<i<<endl;
			}
		}
	}
	return 0;
}
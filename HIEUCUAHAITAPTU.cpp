#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string a, b; getline(cin, a);getline(cin, b);
		string word;
		set <string> s;
		stringstream ss (a);
		while(ss >> word){
			s.insert(word);
		}
		set <string> se;
		string tmp;
		stringstream sss(b);
		while(sss >> tmp){
			se.insert(tmp);
		}
		for(auto it : s){
			if(se.find(it)== se.end()){
				cout << it << " ";
			}
		}
		cout << endl;
	}
}
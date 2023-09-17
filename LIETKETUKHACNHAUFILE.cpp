#include<bits/stdc++.h>
using namespace std;
string lower(string s){
	for(int i = 0; i < s.length(); i++){
		s[i] = tolower(s[i]);
	}
	return s;
}
int main(){
//	ofstream fout;
	string s;
//	fout.open("VANBAN.in");
//	while(fout){
//		getline(cin, s);
//		fout << s << endl;
//	}
//	fout.close();
	ifstream fin;
	set <string> se;
	fin.open("VANBAN.in");
	string word;
	while(fin >> s){
		stringstream ss(s);
		while(ss >> word){
			
			se.insert(lower(word));
		}	
	}
	for(auto it : se){
		cout << it << endl;
	}
	fin.close();
}
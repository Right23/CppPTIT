#include<bits/stdc++.h>
using namespace std;
string lower(string s){
	for(char &x : s){
		x = tolower(x);
	}
	return s;
}
int main(){
	string s;
	ofstream fout;
	ifstream fin;
//	fout.open("DATA1.in");
//	while(fout){
//		getline(cin, s);
//		fout << s << endl;
//	}
//	fout.close();
//	fout.open("DATA2.in");
//	while(fout){
//		getline(cin, s);
//		fout << s << endl;
//	}	
//	fout.close();
	fin.open("DATA1.in");
	set <string> se,g, h;
	string word;
	while(fin >> s){
		stringstream ss (s);
		while(ss >> word){
			se.insert(lower(word));
			h.insert(lower(word));
		}
	}fin.close();
	fin.open("DATA2.in");
	while(fin >> s){
		stringstream ss (s);
		while(ss >> (word)){
			if(se.find(lower(word)) != se.end()){
				g.insert(lower(word));
			}
			else h.insert(lower(word));
		}
	}
	fin.close();
	for(auto it : h){
		cout << it <<" ";
	}
	cout << endl;
	for(auto it : g){
		cout << it <<" ";
	}
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s;
		ofstream fout;
		ifstream fin;
//		fout.open("Input.txt");
//		while(fout){
//			getline(cin, s);
//			fout << s << endl;
//		}
//		fout.close();
		fin.open("Input.txt");
		fout.open("Output.txt");
		while(fin >> s){
			set<char> se;
			for(char x: s){
				if(!isdigit(x)){
					se.insert(x);
				}
			}
			if(se.size() != 0){
				for(auto it : se){
					fout << it;
				}
			}
			else fout <<-1;
			fout << endl;
		}
		fin.close();
		fout.close();
	}
}
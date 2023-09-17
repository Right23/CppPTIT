
#include<bits/stdc++.h>
using namespace std;
int main(){
	string line;
	ofstream fout ("PTIT.out");
	ifstream fin ("PTIT.in");
	
	while(fin >> line){
		fout << line << endl;
	}
	fin.close();
	fout.close();
	return 0;
}
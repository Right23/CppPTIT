#include<bits/stdc++.h>
using namespace std;
int main(){
	string a, b;
	getline(cin, a);
	cin >> b;
	
	string word;
	stringstream ss (a);
	while(ss >> word){
		if(word != b){
			cout << word << " ";
		}
	}
}
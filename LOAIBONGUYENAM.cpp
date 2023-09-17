#include<bits/stdc++.h>
#include<string>
using namespace std;
int main() {
	string s; cin >> s;
	for(auto x : s){
		if( tolower(x) != 'y' && tolower(x) != 'a' && tolower(x) != 'i' && tolower(x) != 'o' && tolower(x) != 'u' && tolower(x) != 'e'){
			cout << "." <<(char) tolower(x);
		}
	}
}
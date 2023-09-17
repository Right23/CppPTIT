#include<bits/stdc++.h>
using namespace std;
bool vowel(char c){
	return c == 'A' || c == 'E';
}
bool ok(string s){
	for(int i = 0; i < s.size(); i++){
		if(vowel(s[i])){
			if(i == 0 || i == s.size() - 1) continue;
			if(!vowel(s[i - 1]) && !vowel(s[i + 1])) return false;
		}
	}return true;
}
int main() {

	char c;
	cin >> c;
	string s = "ABC";
	for(char i = 'D'; i <= c; i++){
		s += i;
	}
	do{
		if(ok(s)) cout << s << endl;
	}while(next_permutation(s.begin(), s.end()));
}



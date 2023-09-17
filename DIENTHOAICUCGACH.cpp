#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t; cin.ignore();
	while(t--){
		string s; cin >> s;
		for(char &x : s) x = tolower(x);
		for(char &x : s){
			if(x=='a'||x=='b'||x=='c') x = '2';
			if(x=='d'||x=='e'||x=='f') x = '3';
			if(x=='g'||x=='h'||x=='i') x = '4';
			if(x=='j'||x=='k'||x=='l') x = '5';
			if(x=='m'||x=='n'||x=='o') x = '6';
			if(x=='p'||x=='q'||x=='r'|| x=='s') x = '7';
			if(x=='t'||x=='u'||x=='v') x = '8';
			if(x=='w'||x=='x'||x=='y'|| x=='z') x = '9';
		}
		int ck;
		int l = 0, r = s.size() - 1;
		while(l <= r){
			if(s[l] != s[r]) {
				ck = 0;break;
			}else{
				ck = 1;
				l++; r--;
			}
		}
		if(ck){
			cout << "YES\n";
		}else cout << "NO\n";
	}
}
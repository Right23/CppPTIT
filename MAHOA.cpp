#include<bits/stdc++.h>
using namespace std ;
int main() {
	int t ;
	cin>> t ;
	while(t--) {
		string s ;
		cin>>s ;
		int len = s.length();
		int count = 1 ;
		for(int i = 0 ; i< len ; i++) {
			if(s[i] == s[i+1]) {
				count++;
			} else {
				cout<<s[i]<<count;
				count = 1 ;
			}
		}
		cout<<endl;
	}
}
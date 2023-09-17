#include<bits/stdc++.h>
using namespace std;
int strtonum(string s){
	int N = 0;
	for(char x : s){
		N = N * 10 + x - '0';
	}return N;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; getline(cin, s);
		int cnt = 0, c = 0, l = 0;
		string word;
		stringstream ss (s);
		while(ss >> word){
			int k = strtonum(word);
			if(k % 2 == 0) c++;
			else l++;
			cnt++;
		}
		if((c < l && cnt % 2 == 1 ) || (c > l && cnt % 2 == 0)){
			cout << "YES\n";
		}else cout << "NO\n";
	}
}
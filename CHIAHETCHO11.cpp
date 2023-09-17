#include<bits/stdc++.h>
using namespace std;
void chia(string s){
	long long sumc = 0, suml = 0;
	for(int i = 0; i < s.length(); i++){
		if(i % 2 == 0){
			sumc += s[i] - '0';
		}else suml += s[i] - '0';
	}if(abs(sumc - suml) % 11 == 0){
		cout << "1" << endl;
	}else cout << "0\n";
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		chia(s);
	}
}
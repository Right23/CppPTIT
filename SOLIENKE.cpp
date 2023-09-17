#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		bool ok = true;
		for(int i = 0; i < s.length() - 1; i++){
			if(abs(s[i] - s[i + 1]) != 1){
				ok = false;
				break;
			}
		} 
		if(ok){
			cout << "YES\n";
		}else cout << "NO\n";
	}
}
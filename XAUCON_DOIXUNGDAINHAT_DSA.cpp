#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int res = 1;
		// tam le
		for(int i = 0; i < s.size(); i++){
			int u = i, v = i;
			while(u >= 0 && v < s.size()){
				if(s[u] == s[v]){
					res = max(res, v-u+1);
					u--; v++;
				}
				else break;
			}
		}
		// tam chan
		for(int i = 0; i < s.size()-1; i++){
			int u = i, v = i+1;
			while(u >= 0 && v < s.size()){
				if(s[u] == s[v]){
					res = max(res, v-u+1);
					u--; v++;
				}
				else break;
			}
		}
		cout << res << endl;
	}
}
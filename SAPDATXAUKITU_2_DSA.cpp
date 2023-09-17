#include<bits/stdc++.h>
using namespace std;
void solve(string s, int d){
	int c[26] = {0};
	for(char x: s){
		c[x - 'A']++;
	}
	int res = *max_element(c, c + 26);
	int k = s.size() - (d - 1)*(res - 1);
	if(res <= k){
		cout << 1 << endl;
	}else cout << -1 << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		int d; cin >> d;
		string s; cin >> s;
		solve(s, d); 
	}
}
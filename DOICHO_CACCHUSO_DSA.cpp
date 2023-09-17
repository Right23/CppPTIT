#include<bits/stdc++.h>
using namespace std;
void solve(string s, int k){
	for(int i = 0; i < s.size(); i++){
		char lg = s[i];// largeset
		int vt = i;//vi tri xa nhat cua so lon nhat lon hon s[i]
		for(int j = i+1; j < s.size(); j++){
			if(s[j] >= lg){
				lg = s[j];
				vt = j;
			}
		}
		if(lg > s[i] && k > 0){
			swap(s[i], s[vt]);
			k--;
		}
	}
	cout << s << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s;
		int k;
		cin >> k >> s;
		solve(s, k);
	}
}
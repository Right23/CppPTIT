#include<bits/stdc++.h>
using namespace std;
string s;
void solve(){
	long long sum = 0;
	for(int i = 0; i < s.size(); i++){
		sum = ((sum * 2) + s[i] - '0') % 5;
	}
	if(sum % 5 == 0){
		cout << "Yes\n";
	}else cout << "No\n";
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		cin >> s;
		solve();
	}
}
#include<bits/stdc++.h>
using namespace std;

void ck(string s) {
	int cnt[26] = {0};
	set <char> se;
	for(char x : s) {
		cnt[x - 'a']++;
	}
	int max_val = *max_element(cnt, cnt + 26);
	int r = s.length() - max_val;
	if(max_val <= r + 1) cout << 1 << endl;
	else cout << 0 << endl;
}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string a;
		cin >> a;
		ck(a);

	}
}
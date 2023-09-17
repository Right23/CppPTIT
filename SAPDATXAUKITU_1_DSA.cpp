#include<bits/stdc++.h>
using namespace std;

void ck(string s){
	int  cnt[26] = {0};
	for(char x : s){
		cnt[x - 'a']++;
	}
	int f_max = *max_element(cnt, cnt + 26);// phan tu xuat hien nhieu nhat
	int r = s.length() - f_max;
	if(f_max <= r + 1){
		cout << 1 << endl;
	}else cout << -1 << endl;
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
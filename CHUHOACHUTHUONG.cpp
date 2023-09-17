#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		char s; cin >> s;
		if(s >= 'a' && s <= 'z') cout << char(s - 32) << endl;
		if(s >= 'A' && s <= 'Z') cout << char(s + 32) << endl;
	}
}
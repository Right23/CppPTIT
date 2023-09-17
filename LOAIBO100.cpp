#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		cin >> s;
		int n = s.length();
		while(s.find("100") != -1) {
			int res = s.find("100");
			s.erase(res, 3);
		}
		if(n - s.length() != 0) {
			cout << n - s.length() << endl;
		}
	}
}
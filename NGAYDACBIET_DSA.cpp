#include<bits/stdc++.h>
using namespace std;

// kiem tra xau doi xung
bool smt(string s) { // symetric
	string t = s.substr(0, 4);
	string q = s.substr(0, 4);
	reverse(q.begin(), q.end());
	return q == t;
}
int n, x[100];
void inkq() {
	for(int i = 1; i <= n; i++) {
		if(x[i] == 1) {
			cout << 2;
		} else if(x[i] == 0) {
			cout << 0;
		}
		if(i == 2 || i == 4) {
			cout <<"/";
		}
	}
	cout << endl;
}

void Try(int i) {
	// duyet cac kha nang cua x[i]
	for(int j = 0; j <= 1; j++) {
		x[i] = j;
		if(i == n) {
			string s = "";
			for(int i = 1; i <= n; i++) {
				if(x[i] == 0) {
					s += "0";
				} else s += "2";
			}
			if( (s[4] != '0') && (s[2] == '0' && s[3] == '2') && (s.substr(0,2) != "00")) {
				inkq();
			}
		} else {
			Try(i + 1);
		}
	}
}
int main() {
	n = 8;
	Try(1);
	return 0;
}

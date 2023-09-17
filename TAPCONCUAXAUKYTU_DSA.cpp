#include<bits/stdc++.h>
using namespace std;
int n;
string res, s;
void Try(int i, int a) {
	for(int j = a; j < s.size(); j++) {
		res += s[j];
		cout << res << ' ';
		Try(i + 1, j + 1);
		res.pop_back();
	}
}
void runCase() {
	cin >> n >> s;
	Try(0, 0);
	cout << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		res.clear();
		runCase();
	}
}
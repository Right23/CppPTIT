#include<bits/stdc++.h>
using namespace std;

int solve(string s) {
	int res = 0;
	int ans = 0;
	int sum = 0;
	for(char x : s) {
		if(isdigit(x)) {
			sum = sum * 10 + x - '0';
		} else {
			ans += sum;
			sum = 0;
			res = max(res, ans);
			ans = 0;
		}
	}
	res = max(res, sum);
	return res;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		cout << solve(s) << endl;
	}
}
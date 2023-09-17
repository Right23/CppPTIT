#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		ll res = 0;
		for(int i = 0; i < s.size(); i++) {
			ll tmp = 0;
			for(int j = i; j < s.size(); j++) {
				tmp = tmp * 10 + (s[j] - '0');
				res += tmp;
			}
		}
		cout << res << endl;
	}
}


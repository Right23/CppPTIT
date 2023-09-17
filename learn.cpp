#include<bits/stdc++.h>
using namespace std;
bool tang(string s) {
	for(int i = 0; i < s.length() - 1; i++) {
		if(s[i] > s[i + 1]) return false;
		break;
	}
	return true;
}
bool giam(string s) {
	for(int i = 0; i < s.length() - 1; i++) {
		if(s[i] < s[i + 1]) return false;
		break;
	}
	return true;
}
int snt(long long x) {
	if(x < 2) return 0;
	for(long long i = 0; i * i <= x; i++) {
		if( x % i == 0) return 0;
	}
	return 1;
}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		int n;
		cin >> n;
		int cnt = 0;
		for(long long i = pow(10, n - 1); i < pow(10, n); i++) {
			if(snt(i)) {
				if((tang(to_string(i)) || giam(to_string(i))) ) {
					cnt++;

				}
			}
		}
		cout << cnt << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
string s;
int GiaiQuyet(int k) {
	int dem = 0;
	for(int i= 0; i< s.length(); i++) {
		int res = 0;
		for(int j = i; j < s.length(); j++) {
			res = res * 10 + s [j] -'0';
			res %= k;
			if(res == 0) dem++;
		}
	}
	return dem;
}
int main() {
	int T;
	cin >> T;
	while(T--) {
		cin >> s;
		cout << GiaiQuyet(8)-GiaiQuyet(24) << endl;
	}
	return 0;
}


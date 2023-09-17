#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		long long b, p,cnt=0;
		cin >> b >> p;
		for(long long i = 1; i < p; i++) {
			if((i*i) % p == 1) {
				long long k = i + p * (b/p);
				if(k > b) k -= p;
				cnt += (k-i)/p + 1;
			}
		}
		cout << cnt << endl;
	}
}
//copy
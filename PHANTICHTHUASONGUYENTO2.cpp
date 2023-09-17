#include<bits/stdc++.h>
using namespace std;

bool nt(long x) {
	if(x < 2) return false;
	for(int i = 2; i * i <= x; i++) {
		if(x % i == 0) return false;
	}
	return true;
}
int main() {
	long x;
	cin >> x;
	map<long,int> mp;
	for(long i = 2; i * i <= x; i++) {
//		int mu =0;
		while( x % i == 0) {
			mp[i]++;
			x /= i;
		}
	}
	if(x != 1) {
		mp[x]++;
	}
	for(auto it : mp) {
		cout << it.first << " " << it.second << endl;
	}
}
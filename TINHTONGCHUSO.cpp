#include<bits/stdc++.h>
using namespace std;
void rut(long x) {
	int s = 0;
	while(x > 0) {
		s += x % 10;
		x /= 10;
	}
	if(s >= 10) {
		rut(s);
	}
	if(s < 10) {
		cout << s << endl;
	}
}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		long x;
		cin >> x;
		rut(x);
	}
}
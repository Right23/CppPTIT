#include<bits/stdc++.h>
using namespace std;


int pos_max(long a[], int n) {
	long max = -99999999;
	int pos;
	for(int i = 0; i < n; i++) {
		if(a[i] >= max) max = a[i];
	}
	for(int i = 0; i < n; i++) {
		if(a[i] == max) {
			pos = i;
		}
	}
	return pos;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		long a[n];
		for(long &x: a) {
			cin >> x;
		}
		if(pos_max(a, n) != n - 1) {
			   cout << pos_max(a, n) + 1 << endl;
		}
		else cout << 0 << endl;

	}
}




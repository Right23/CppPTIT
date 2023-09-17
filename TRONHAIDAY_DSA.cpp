#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int a[n], b[m], c[n + m];
		int i = 0;
		for(int &x : a) {
			cin >> x;
			c[i] = x;
			i++;
		}
		for(int &x : b) {
			cin >> x;
			c[i] = x;
			i++;
		}
		sort(c, c + m + n);
		for(int x : c) cout << x <<" ";
		cout << endl;
	}
}

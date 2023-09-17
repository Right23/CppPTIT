#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int m, n;
		cin >> m >> n;
		int a[m], b[n];
		for(int &x : a) {
			cin >> x;
		}
		for(int &x : b) {
			cin >> x;
		}
		vector <int> giao(m + n), hop(m + n);
		auto it = set_union(a, a + m, b, b + n, hop.begin());
		hop.resize(it - hop.begin());
		for(int x : hop) {
			cout << x << " ";
		}
		cout << endl;
		auto IT = set_intersection(a, a + m, b, b + n, giao.begin());
		giao.resize(IT - giao.begin());
		for(int x : giao) {
			cout << x << " ";
		}
		cout << endl;
	}
}
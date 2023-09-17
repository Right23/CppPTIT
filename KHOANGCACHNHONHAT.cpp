#include<bits/stdc++.h>
using namespace std;

void dif(long a[], int n) {
	long dis = 99999999;
	sort(a, a + n);
	for(int i = 0; i < n - 1; i++) {
		dis = min(dis, abs(a[i] - a[i + 1]));
	}
	cout << dis << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) {

		int n;
		cin >> n;
		long a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}

		dif(a, n);
	}
}
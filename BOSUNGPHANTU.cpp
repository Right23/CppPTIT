#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>> t;
	while(t--) {
		int n;
		cin >> n ;
		int a[100001] = {0};
		int m = INT_MIN, p = INT_MAX;
		for(int i = 0; i < n; i++) {
			int x;
			cin >> x;
			m = max(m, x);
			p = min(p, x);
			a[x] = 1;
		}
		int cnt = 0;
		for(int i = p; i <= m; i++) {
			if(a[i] == 0) {
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}
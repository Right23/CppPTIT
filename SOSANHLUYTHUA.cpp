#include<bits/stdc++.h>
using namespace std;
using ll = long long;
// dem x^y > y^x;
int cnt[5];
int first_pos(int a[], int l, int r, int x) {
	int res = -1;
	while(l <= r) {
		int m = (l + r) / 2;
		if(a[m] > x) {
			res = m;
			r = m - 1;
		} else l = m + 1;
	}
	return res;
}
int count(int y[], int m, int x) {
	if(x == 0) {
		return 0;
	}
	if(x == 1) {
		return cnt[0];
	}
	ll res = cnt[0] + cnt[1];
//	auto it = upper_bound(y, y + m, x);
//	res += (y + n) - it;
	int l = first_pos(y, 0, m - 1, x);
	if(l != -1) {
		res += m - l;
	}
	if(x == 2) {
		res = res - cnt[3] - cnt[4];
	}
	if(x == 3) {
		res += cnt[2];
	}
	return res;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(int i = 0; i < m; i++) {
			cin >> b[i];
			if(b[i] <= 4) {
				cnt[b[i]]++;
			}
		}
		sort(b, b + m);
		ll ans = 0;
		for(int x : a){
			ans += count(b, m, x);
		}
		cout << ans << endl;
		memset(cnt, 0, sizeof(cnt));
	}
}
#include<bits/stdc++.h>
using namespace std;
int n, x[100], k;
//k = so bit1
void inkq() {
	for(int i = 1; i <= n; i++) {
		cout << char(x[i] + 65);
	}
	cout << endl;
}
bool check() {
	int dem = 0, res = 0;
	for(int i = 1; i <= n; i++) {
		if(x[i] == 0) {
			dem++;
		} else {
			dem = 0;
		}
		if(dem > k) {
			return false;
		} else if(dem == k) {
			res++;
		}
	}
	return res == 1;
}
int cnt = 0;
int Try2(int i) {
	// duyet cac kha nang cua x[i]
	for(int j = 0; j <= 1; j++) {
		x[i] = j;
		if(i == n) {
			if(check()) {
				cnt++;
			}
		} else {
			Try2(i + 1);
		}
	}
	return cnt;
}
void Try(int i) {
	// duyet cac kha nang cua x[i]
	for(int j = 0; j <= 1; j++) {
		x[i] = j;
		if(i == n) {
			if(check()) {
				inkq();
			}
		} else {
			Try(i + 1);
		}
	}
}
int main() {
	cin >> n >> k;
	cout << Try2(1) << endl;
	Try(1);
	return 0;
}

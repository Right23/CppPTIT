#include<iostream>
using namespace std;
int n, k, a[100], c[100], ok;
void ktao() {
	for(int i = 1; i <= n; i++) {
		a[i] = i;
	}
}
//
void sinh() {
	int i = n - 1;
	while(i >= 1 && a[i] > a[i + 1]) {
		--i;
	}
	if(i == 0) {
		ok = 0;// la cau hinh cuoi cung;
	} else {
		// di tim ptu > a[i] trong [i + 1, n]
		int j = n;
		while(a[i] > a[j]) {
			j--;
		}
		swap(a[i], a[j]);
		int l = i + 1, r = n;
		while(l < r) {
			swap(a[l], a[r]);
			l++;
			r--;
		}
		// hoac dung reverse(a + i + 1, a + n + 1)
	}
}
bool nto(int x) {
	if(x < 2) return false;
	for(int i = 2; i * i <= x; i++) {
		if(x % i == 0) return false;
	}
	return true;
}
bool ck() {
	int s = 0;
	for(int i = 1; i <= k; i++) {
		s += c[a[i]];
	}
	if(!nto(s)) {
		return false;
	} else {
		for(int i = k + 1; i <= n; i++) {
			s += c[a[i]] - c[a[i - k]];
			if(!nto(s)) {
				return false;
			}
		}
	}
	return true;
}
int main() {
	cin >> n >> k;
	ktao();
	for(int i = 1; i <= n; i++) {
		cin >> c[i];
	}
	ok = 1;
	while(ok) {
		if(ck()) {
			for(int i = 1; i <= n; i++) {
				cout << c[a[i]] <<" ";
			}
			cout << endl;
		}
		sinh();
	}
}

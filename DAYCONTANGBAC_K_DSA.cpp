#include<bits/stdc++.h>
using namespace std;
int n, k, a[100], ok;
void ktao() {
	for(int i = 1; i <= n; i++) {
		a[i] = i;
	}
}
//
int c[100];
void sinh() {
	int i = k;
	//n - k + i = max_value cua a[i]
	while(i >= 1 && a[i] == n - k + i) {
		i--;
	}
	if(i == 0) {
		ok = 0; // da la cau hinh cuoi cung
	} else {
		a[i]++;
		for(int j = i + 1; j <= k; j++) {
			a[j] = a[j - 1] + 1;
		}
	}
}
//
int dem = 0; // dem so day thoa man tang dan
// ham kiem tra day c[k] co tang dan hay k
bool ck(int c[], int k) {
	for(int i = 1; i <= k - 1; i++) {
		if(c[a[i]] > c[a[i + 1]]) return false;
	}
	return true;
}
int main() {
	cin >> n >> k;
	ktao();
	ok = 1;
	for(int i = 1; i <= n; i++) cin >> c[i];
	while(ok) {

		if(ck(c, k)) {
			dem++;
		}
		sinh();
	}cout << dem;
}
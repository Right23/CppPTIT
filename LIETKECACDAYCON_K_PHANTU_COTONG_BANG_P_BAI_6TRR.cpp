#include<bits/stdc++.h>
using namespace std;
int n, k, P, a[100], c[100], ok;
void ktao() {
	for(int i = 1; i <= n; i++) {
		a[i] = i;
	}
}
//
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
bool ck() {
	int s = 0;
	for(int i = 1; i <= k; i++) {
		s += c[a[i]];
	}
	return s == P;
}

int main() {
	cin >> n >> k >> P;
	for(int i = 1; i <= n; i++) {
		cin >> c[i];
	}
	ktao();
	ok = 1;
	while(ok) {
		if(ck()) {
			for(int i = 1; i <= k; i++) {
				cout << c[a[i]] <<" ";
			}
			cout << endl;
		}
		sinh();
	}
}
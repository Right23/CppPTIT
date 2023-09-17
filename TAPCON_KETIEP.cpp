#include<bits/stdc++.h>
using namespace std;
int n, k, a[100000], ok;
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
//
int dem = 0;
int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		ok = 1;
//	ktao();
		for(int i = 1; i <= k; i++) {
			cin >> a[i];
		}
		while(ok) {
			sinh();
			if(!ok) {
				for(int i = 1; i <= k; i++) {
					cout << i <<" ";
				}
				break;
			}
			for(int i = 1; i <= k; i++) {
				cout << a[i] <<" ";
			}
			cout << endl;
			break;
		}
	}
}
#include<bits/stdc++.h>
using namespace std;
int n, cnt, ok, a[100];
//
void ktao() {
	cnt = 1;
	a[1] = n;
}
void sinh() {
	int i = cnt;
	while(i >= 1 && a[i] == 1) {
		i--;
	}
	if(i == 0) {
		ok = 0;// la cau hinh cuoi cung;
	} else {
		a[i]--;
		int d = cnt - i + 1;// tong cac so 1 da bo qua
		cnt = i; // gom lay cnt ptu dau tien
		int q = d / a[i];
		int r = d % a[i];
		if(q) {
			for(int j = 1; j <= q; j++) {
				cnt++;
				a[cnt] = a[i];
			}
		}
		if(r) {
			cnt++;
			a[cnt] = r;
		}
	}
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		ok = 1;
		ktao();
		int dem = 0;
		while(ok){
			dem++;
			sinh();
		}
		ktao();
		ok = 1;
		cout << dem << endl;
		while(ok) {
			cout <<"(";
			for(int i = 1; i <= cnt; i++) {
				cout << a[i];
				if(i < cnt) cout <<" ";
			}
			cout <<")";
			cout << " ";
			sinh();
		}
		cout << endl;
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
// ktao cau hinh dau tien
// while(khi chua phai cau hinh cuoi cung){
// in ra cau hinh hien tai
// sinh ra cau hinh tiep theo
//}
int a[100], n, k, ok;
void ktao() {
	for(int i = 1; i < n + n - 1; i++) {
		a[i] = 0;
	}
}
//
void sinh() {
	// bat dau tu bit cuoi cung, va di tim bit 0 dau tien
	int i = n + n - 2;
	while(i >= 1 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if(i == 0) {
		ok = 0;// day chinh la cau hinh cuoi cung;
	} else {
		a[i] = 1;
	}
}
// ma tran n hang m cot
// tu vi tri (0, 0) phai di n + m buoc de toi diem n + m
// goi cach di xuong la 0, di sang phai la 1
bool ck() {
	int cnt = 0;
	for(int i = 1; i < n + n - 1; i++) {
		cnt += a[i];
	}
	return cnt == n - 1;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		ok = 1;
		ktao();
		int c[n][n];
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				cin >> c[i][j];
			}
		}
		int dem = 0;
		while(ok) {
			if(ck()) {
				int  sum = c[1][1];
				int i = 1, j = 1;
				for(int m = 1; m < n + n - 1; m++) {
					if(a[m] == 0) {
						i++;
						sum += c[i][j];
					} else {
						j++;
						sum += c[i][j];
					}
				}
				if(sum == k) {
					dem++;
				}
//				for(int m = 1; m < n + n - 1; m++){
//					cout << a[m];
//				}
//				cout << endl;
			}
			sinh();
		}
		cout << dem << endl;
	}
}
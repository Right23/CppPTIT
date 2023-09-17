#include<bits/stdc++.h>
using namespace std;
// ktao cau hinh dau tien
// while(khi chua phai cau hinh cuoi cung){
// in ra cau hinh hien tai
// sinh ra cau hinh tiep theo
//}
int n, k, a[100], c[100], ok;
void ktao() {
	for(int i = 1; i <= n; i++) {
		a[i] = 0;
	}
}
//
void sinh() {
	// bat dau tu bit cuoi cung, va di tim bit 0 dau tien
	int i = n;
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
// in nguoc lai thi chon 0 thay vi chon 1
bool ck() {
	int s = 0;
	for(int i = 1; i <= n; i++) {
		if(a[i] == 0) {
			s += c[i];
		}
	}
	return s == k;
}
//
int main() {
	int t;
	cin >> t;
	while(t--) {
		int count = 0;
		cin >> n >> k;
		ktao();
		for(int i = 1; i <= n; i++) {
			cin >> c[i];
		}
		sort(c + 1, c + n + 1);
		ok = 1;
		while(ok) {
			if(ck()) {
				int s = 0;
				cout <<"[";
				for(int i = 1; i <= n; i++) {
					if(a[i] == 0) {
						s += c[i];
						cout << c[i];
						if(s != k) cout <<" ";
					}
				}
				cout <<"]";
				count++;
				cout <<" ";
			}
			sinh();
		}
		if(count == 0) {
			cout <<-1<< endl;
		} else cout << endl;
	}
	return 0;
}

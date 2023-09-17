#include<bits/stdc++.h>
using namespace std;
// ktao cau hinh dau tien
// while(khi chua phai cau hinh cuoi cung){
// in ra cau hinh hien tai
// sinh ra cau hinh tiep theo
//}
int n, a[100], ok;
int k;
void ktao() {
	for(int i = 1; i <= n; i++) {
		a[i] = 0;
	}
}
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
//01
//
// 8 la 1, 6 la 0
bool ck() {
	if(n <= 5 || n >= 16) return false;
	if(a[1] == 0 || a[n] == 1) {
		return false;
	}
	for(int i = 1; i < n; i++) {
		if(a[i] == a[i + 1] && a[i] == 1) {
			return false;
		}
	}
	for(int i = 2; i < n - 2; i++) {
		if(a[i] == a[i + 1] && a[i] == a[i + 2] && a[i] == a[i + 3] && a[i] == 0) {
			return false;
		}
	}
	return true;
}
int main() {

	cin >> n;
	ok = 1;
	ktao();
	while(ok) {
		if(ck()) {
			for(int i = 1; i <= n; i++) {
				if(a[i] == 1) {
					cout << 8;
				} else cout << 6;
			}
			cout << endl;
		}
		sinh();
	}

	return 0;

}
/////sinh xau nhi phan co k bit 1;
//int main(){
//	cin >> n;
//	ok == 1;
//	ktao();
//	while(ok){
//		if(ck()){
//			for(int i = 1; i <= n; i++){
//				cout << a[i];
//			}
//			cout << " ";
//		}
//		sinh();
//	}
//}
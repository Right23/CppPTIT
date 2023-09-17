#include<bits/stdc++.h>
using namespace std;
// ktao cau hinh dau tien
// while(khi chua phai cau hinh cuoi cung){
// in ra cau hinh hien tai
// sinh ra cau hinh tiep theo
//}
int n, a[100], ok;
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
int k;
bool ck() {
	int cnt = 0;
	for(int i = 1; i <= n; i++) {
		cnt += a[i];
	}
	return cnt == k;
}
//
int dem = 0;
int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		ok = 1;
		ktao();
//	for(int i = 1; i <= n; i++){
//		cin >> a[i];
//	}
		while(ok) {
			if(ck()) {
				for(int i = 1; i <= n; i++) {
					cout << a[i];
				}
				cout << endl;
			}
//		dem++;
//		if(dem == 5) break;
			sinh();
		}
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
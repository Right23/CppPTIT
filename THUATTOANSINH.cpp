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
//bool ck(){
//	int cnt = 0;
//	for(int i = 1; i <= n; i++){
//		cnt += a[i];
//	}
//	return cnt == k;
//}
//
bool ck() {
	string s ="";
	for(int i = 1; i <= n; i++) {
		s += to_string(a[i]);
	}
	string t = s;
	reverse(s.begin(), s.end());
	return t == s;
}
//

int main() {
	cin >> n;
	ok = 1;
	ktao();

	while(ok) {
		if(ck()) {
			for(int i = 1; i <= n; i++) {
				cout << a[i] <<" ";
			}
			cout << endl;

		}
		sinh();
	}
	return 0;
}

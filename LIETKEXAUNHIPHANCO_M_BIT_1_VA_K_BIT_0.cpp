#include<bits/stdc++.h>
using namespace std;
//ktao
//while(chua phai cau hinh cuooi cung0{
//in ra cau hinh hien tai
//sinh ra cau hinh tiep theo}
int n, m, k, a[100], ok;
void ktao() {
	for(int i = 1; i <= n; i++) {
		a[i] = 0;
	}
}
//
void sinh() {
	int i = n;// bat dau tu chi so cuoi cung
	while(i >= 1 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if(i == 0) {
		ok = 0;// day la cau hinh cuoi cung;
	} else {
		a[i] = 1;
	}
}
// m = 3
// 11110
// 11011
// 1110111

bool check1() {
	int dem = 0, res = 0;
	for(int i = 1; i <= n; i++) {
		if(a[i] == 1) {
			dem++;
		} else {
			dem = 0;
		}
		if(dem > m) {
			return false;
		} else if(dem == m) {
			res++;
		}
	}
	return res == 1;
}
// k = 3; Co cac truong hop sai
// 00001
// 00100
// 0001000
bool check0(){
	int dem = 0, res = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] == 0){
			dem++;
		}else{
			dem = 0;
		}
		if(dem > k){
			return false;
		}
		else if(dem == k){
			res++;
		}
	}
	return res == 1;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> m >> k;
		ktao();
		ok = 1;
		while(ok) {
			if(check1() && check0()) {
				for(int i = 1; i <= n; i++) {
					cout << a[i];
				}
				cout <<" ";
			}
			sinh();
		}
		cout << endl;
	}
}
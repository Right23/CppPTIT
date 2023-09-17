#include<bits/stdc++.h>
using namespace std;
struct SinhVien {
	string ten, lop, ns, ma = "B20DCCN001";
	float gpa;
	////
	void nhap() {
		getline(cin, ten);
		cin >> lop >> ns >> gpa;
		if(ns[1] == '/') {
			ns = "0" + ns;
		}
		if(ns[4] == '/') {
			ns.insert(3,"0");
		}
	}
	void xuat() {
		cout << ma <<" "<< ten <<" "<< lop <<" "<< ns <<" "<< fixed << setprecision(2) << gpa;
	}
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
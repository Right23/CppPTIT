#include<bits/stdc++.h>
using namespace std;
struct NhanVien {
	string ma;
	string ten;
	string gt;
	string ns;
	string dc;
	long long mst;
	string nk;
};
void nhap(NhanVien &p) {
	p.ma = "00001";
	getline(cin, p.ten); 
	cin >> p.gt >> p.ns;
	cin.ignore();
	getline(cin, p.dc);
	cin >> p.mst >> p.nk;
	

	//
	if(p.ns[1] == '/') {
		p.ns = "0" + p.ns;
	}
	//
	if(p.ns[4] == '/') {
		p.ns.insert(3, "0");
	}
	if(p.nk[1] == '/') {
		p.nk = "0" + p.ns;
	}
	//
	if(p.nk[4] == '/') {
		p.nk.insert(3, "0");
	}
}
void in(NhanVien p) {
	cout << p.ma << " " << p.ten << " " << p.gt << " " << p.ns << " " << p.dc << " " << p.mst << " " << p.nk << endl;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
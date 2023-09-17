#include<bits/stdc++.h>
using namespace std;

class NhanVien {
	private:
		string ten, ns, gt, dc, mst, nk, ma;
	public:
		void nhap();
		void xuat();
		void setma(string);
		string getten();
};
string NhanVien :: getten() {
	return this->ten;// return ten;
}
bool cmp(NhanVien a, NhanVien b) {
	return a.getten() > b.getten();
}
void NhanVien :: setma(string ma) {
	this->ma = ma;
}
void NhanVien :: nhap() {
	getline(cin, ten);
	cin >> gt >> ns;
	cin.ignore();
	getline(cin, dc);
	cin >> mst >> nk;
}
void NhanVien :: xuat() {
	setma("00001");
	cout << ma <<" "<<ten<<" "<<gt<<" "<<ns<<" "<<dc<<" "<<mst<<" "<<nk;
}
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
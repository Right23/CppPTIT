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

	cin.ignore();
	getline(cin, p.ten);
	cin >> p.gt >> p.ns;
	cin.ignore();
	getline(cin, p.dc);
	cin >> p.mst >> p.nk;
}
void inds(NhanVien p[], int n) {
	for(int i = 0; i < n; i++) {
		cout << setw(5) << setfill('0') << i + 1 <<" ";
		cout << p[i].ten << " " << p[i].gt << " " << p[i].ns << " " << p[i].dc << " " << p[i].mst << " " << p[i].nk << endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
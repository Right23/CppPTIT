#include<bits/stdc++.h>
using namespace std;
struct SinhVien {
	string  ma, ten, lop;
	float m1, m2, m3;
	int id;
};
bool cmp(SinhVien a, SinhVien b) {
	return a.ma < b.ma;
}
void nhap (SinhVien &a) {

		cin >> a.ma;
		cin.ignore();
		getline(cin, a.ten);
		cin >> a.lop >> a.m1 >> a.m2 >> a.m3;
	
}
void sap_xep(SinhVien a[], int n){
	sort(a, a + n, cmp);
}
void in_ds(SinhVien a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << i + 1 <<" "<< a[i].ma <<" "<< a[i].ten <<" "<< a[i].lop <<" "<< fixed << setprecision(1)<< a[i].m1 <<" "<<a[i].m2 <<" "<<a[i].m3 << endl;
	}
}
// co the dung nap chong toan tu
//struct SinhVien{
//	string ma, ten, lop;
//	float m1, m2, m3;
//	int id;
//	// nap chong toan tu <;
//	bool operator < (const SinhVien other){
//		return ma < other.ma;
//	}
//};

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}

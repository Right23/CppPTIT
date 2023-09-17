#include<bits/stdc++.h>
using namespace std;
struct SinhVien {
	string  ma, ten, lop;
	float m1, m2, m3;
};

//// hoac la nap chong luon toan tu < trong struct thi ham sort khong can cmp;
//struct SinhVien{
//	string ma, ten, lop;
//	float m1, m2, m3;
//	bool operator < (const SinhVien other){
//		return ten < other.ten;
//	}
//};
string chuan(string name){
	stringstream ss (name); 
	string word, res = "";
	while(ss >> word){
		res += word;
	}
	return res;
}
bool cmp(SinhVien a, SinhVien b) {
	return chuan(a.ten) < chuan(b.ten);
}
void nhap (SinhVien &a) {
		cin >> a.ma;
		scanf("\n");
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

int main(){
    int n;
    cin >> n;
    SinhVien ds[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}

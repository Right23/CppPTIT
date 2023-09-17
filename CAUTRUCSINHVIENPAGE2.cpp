#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten, lop, ns, ma = "N20DCCN001";
	float gpa ;
};
void nhapThongTinSV(SinhVien &a){
	getline(cin, a.ten);
	cin >> a.lop;
	cin >> a.ns >> a.gpa;
	if(a.ns[1] =='/'){
		a.ns = "0" + a.ns;
	}//
	if(a.ns[4] == '/'){
		a.ns.insert(3,"0");
	}
}
void inThongTinSV(SinhVien a){
	cout << a.ma <<" "<< a.ten <<" "<< a.lop <<" "<< a.ns <<" "<< fixed << setprecision(2) << a.gpa << endl;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
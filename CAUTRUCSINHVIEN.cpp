#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ma;
	string ten;
	string lop;
	string ns;
	float gpa;
};
void nhap(SinhVien &p){
	getline(cin, p.ten);
	cin >> p.lop;
	cin >> p.ns;
	cin >> p.gpa;
	p.ma = "B20DCCN001";
	//
	if(p.ns[1] == '/'){
		p.ns = "0" + p.ns;
	}
	//
	if(p.ns[4] == '/'){
		p.ns.insert(3, "0");
	}
}
void in(SinhVien p){
	cout << p.ma << " " << p.ten << " " << p.lop << " " << p.ns << " " << fixed << setprecision(2) << p.gpa << endl;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

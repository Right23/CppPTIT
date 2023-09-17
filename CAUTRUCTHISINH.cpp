#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string ten, ns;
	float m1, m2,m3;
};
void nhap(ThiSinh &a){
	getline(cin, a.ten);
	cin  >> a.ns >> a.m1 >> a.m2 >> a.m3;
}
void in(ThiSinh a){
	float tong = a.m1 + a.m2 + a.m3;
	cout << a.ten << " " << a.ns << " " << fixed << setprecision(1) << tong;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
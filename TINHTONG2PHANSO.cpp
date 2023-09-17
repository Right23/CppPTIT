#include<bits/stdc++.h>
using namespace std ;
using ll = long long;
ll gcd(ll a, ll b){
	if(b == 0) return a;
	else return gcd(b, a%b);
}
ll lcm(ll a, ll b){
	return a * b / gcd(a, b);
}
struct PhanSo {
	ll tu, mau;
};
void nhap(PhanSo &p){
	cin >> p.tu >> p.mau;
}
void rutgon(PhanSo &p){
	ll g = gcd(p.tu, p.mau);
	p.tu /= g;
	p.mau /= g;
}
void in(PhanSo p){
	cout << p.tu << "/" << p.mau;
}
PhanSo tong(PhanSo a, PhanSo b){
	ll mc = lcm(a.mau, b.mau);
	a.tu *= mc / a.mau;
	b.tu *= mc / b.mau;
	a.tu += b.tu;
	a.mau = mc;
	rutgon(a);
	return a;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a, ll b){
	if(b == 0) return a;
	else return gcd(b, a % b);
}
ll lcm(ll a, ll b){
	return a * b / gcd(a, b);
}
struct PhanSo{
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
void print(PhanSo p){
	cout << p.tu << "/" << p.mau << " " ;
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
PhanSo tich(PhanSo a, PhanSo b){
	 a.mau = a.mau * b.mau;
	 a.tu = a.tu * b.tu;
	rutgon(a);
	return a;
}
void process(PhanSo a, PhanSo b){
	PhanSo t = tong(a, b);
	PhanSo c = tich(t, t);
	print(c);
	PhanSo m = tich(c, a);
	PhanSo d = tich(m, b);
	print(d);
	cout << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
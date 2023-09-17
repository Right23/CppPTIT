#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll gcd(ll a, ll b) {
	if(b == 0) return a;
	else return gcd(b, a % b);
}

ll lcm(ll a, ll b){
	return a * b / gcd(a, b);
}
class PhanSo {
	private:
		ll tu, mau;
	public:
		PhanSo(ll tu, ll mau);
		friend ostream& operator << (ostream&, PhanSo );
		friend istream& operator >> (istream&, PhanSo &);
		void rutgon();
		friend PhanSo operator + (PhanSo, PhanSo);
};

PhanSo :: PhanSo(ll tu, ll mau) {
	this->tu = tu;
	this->mau = mau;
}

ostream& operator << (ostream& out, PhanSo a) {
	out << a.tu <<"/"<< a.mau << endl;
	return out;
}

istream& operator >> (istream& in, PhanSo &a) {
	in >> a.tu >> a.mau;
	return in;
}

void PhanSo :: rutgon() {
	ll  g = gcd(tu, mau);
	tu /= g;
	mau /= g;
}

PhanSo operator + (PhanSo a, PhanSo b){
	PhanSo tong(1, 1);
	ll mc = lcm(a.mau, b.mau);
	a.tu *= mc / a.mau;
	b.tu *= mc / b.mau;
	tong.tu = a.tu + b.tu;
	tong.mau = mc;
	tong.rutgon();
	return tong;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
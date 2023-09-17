#include<bits/stdc++.h>
using namespace std;

class sv {
	private:
		string ma, ten;
		int sl;
	public:
		sv() {
			ma = ten = "";
			sl = 0;
		}
		friend ostream& operator << (ostream &out, sv);
		friend istream& operator >> (istream &in, sv&);
		string getMa() {
			return this->ma;
		}
		int getSl() {
			return this->sl;
		}
};
ostream& operator << (ostream& out, sv a) {
	cout << a.ma <<" "<< a.ten <<" "<< a.sl << endl;
	return out;
}
istream& operator >> (istream& in, sv &a) {
	cin >> a.ma;
	cin.ignore();
	getline(cin, a.ten);
	cin >> a.sl;
	return in;
}
bool cmp(sv a, sv b) {
	if(a.getSl() == b.getSl()) {
		return a.getMa() < b.getMa();
	} else return a.getSl() > b.getSl();
}
int main() {
	int n;
	cin >> n;
	sv ds[n];
	for(int i = 0; i < n; i++) {
		cin >> ds[i];
	}
	sort(ds, ds + n, cmp);
	int q;
	cin >> q;
	while(q--) {
		vector <sv> v;
		int a, b;
		cin >> a >> b;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:\n";
		for(sv x : ds) {
			if(x.getSl() >= a && x.getSl() <= b) {
				v.push_back(x);
			}
		}
		for(sv x : v){
			cout << x;
		}

	}
}
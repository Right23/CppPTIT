#include<bits/stdc++.h>
using namespace std;

class SinhVien {
	private:
		string ma, ten, lop, email;
	public:
		SinhVien() {

			ma = ten = lop = email = "";
		}
		friend ostream& operator << (ostream& out, SinhVien );
		friend istream& operator >> (istream& in, SinhVien &);
		string getLop() {
			return this->lop;
		}
		string getMa(){
			return this->ma;
		}
//		bool operator < (SinhVien another){
//			return this->ma < another.ma;
//		}
};
ostream& operator << (ostream& out, SinhVien a){
	cout << a.ma <<" "<< a.ten <<" "<< a.lop <<" "<< a.email<< endl;
	return out;
}
istream& operator >> (istream& in, SinhVien & a){
	in >> a.ma ;
	cin.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.email;
	return in;
}
/////

bool cmp(SinhVien a, SinhVien b){
		return a.getMa() < b.getMa();
}

int main(){
	vector<SinhVien> v;
	SinhVien tmp;
	while(cin >> tmp){
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(), cmp);
	for(SinhVien x : v){
		cout << x;
	}
}
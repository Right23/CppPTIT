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

//bool cmp(SinhVien a, SinhVien b){
//		return a.getMa() < b.getMa();
//}

int main(){
	int n; cin >> n;
//c1	SinhVien a[n];
	map<string, vector<SinhVien> > mp;
	for(int i = 0; i < n; i++){
		SinhVien tmp;
		cin >> tmp;
		mp[tmp.getLop()].push_back(tmp);
	}
	int q; cin >> q;
	while(q--){
		string s; cin >> s;
		cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
//		for(SinhVien x : a){
//			if(x.getLop() == s){
//				cout << x;
//			}
//		} c1
////////c2
		for(SinhVien x : mp[s]){
			cout << x;
		}
	}
}
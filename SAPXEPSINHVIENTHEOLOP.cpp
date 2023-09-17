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
//			return this->lop < another.lop;
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
	if(a.getLop() == b.getLop()){
		return a.getMa() < b.getMa();
	}
	else return a.getLop() < b.getLop();
}

int main(){
	int n; cin >> n;
	SinhVien a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		cout << a[i] ;
	}
}
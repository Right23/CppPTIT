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
		string getMa() {
			return this->ma;
		}
//		bool operator < (SinhVien another){
//			return this->ma < another.ma;
//		}
};
ostream& operator << (ostream& out, SinhVien a) {
	cout << a.ma <<" "<< a.ten <<" "<< a.lop <<" "<< a.email<< endl;
	return out;
}
istream& operator >> (istream& in, SinhVien & a) {
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

string convert(string s){
	stringstream ss (s);
	vector <string> v;
	string word, res = "";
	while(ss >> word){
		v.push_back(word);
	}
	for(int i = 0; i < 2 ; i++){
		res += toupper(v[i][0]);
	}return res;
}
void viethoa(string &s){
	for(char &x : s) x = toupper(x);
}
int main() {
	int n;
	cin >> n;
	map<string, vector<SinhVien> > mp;
	for(int i = 0; i < n; i++){
		SinhVien tmp; cin >> tmp;
		mp[tmp.getMa().substr(5, 2)].push_back(tmp);
	}
	int q;
	cin >> q;
	cin.ignore();
	while(q--) {
		string nganh;getline(cin, nganh);
		viethoa(nganh);
		cout << "DANH SACH SINH VIEN NGANH " << nganh << ":" << endl;
		string ng = convert(nganh);
		if(ng == "CN" || ng == "AT"){
			for(SinhVien x : mp[ng]){
				if(x.getLop().find("E") == string :: npos){
					cout << x;
				}
			}
		}
		else {
			for(SinhVien x : mp[ng]){
				cout << x;
			}
		}
	}
}
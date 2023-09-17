#include<bits/stdc++.h>
using namespace std;
string convert(string s){
	stringstream ss (s);
	vector <string> v;
	string word, res = "";
	while(ss >> word){
		res+= toupper(word[0]);
	}
	return res;
}
string getname(string name){
	string res, word;
	stringstream ss (name);
	while(ss >> word){
		res = word;
	}
	return res;
}

class SinhVien {
	private:
		string ten, mon;
		string ma;
		
	public:
		static int cnt;
		void nhap();
		void in();
		string getMon(){
			return this->mon;
		}
		
};
int  SinhVien :: cnt = 0;
/////

void SinhVien :: nhap(){
	++cnt;
	string s = to_string(cnt);
	s = string(2 - s.size(), '0') + s;
	ma = "GV" + s;
	getline(cin, ten);
	getline(cin, mon);
}
void SinhVien :: in(){
	cout << ma <<" "<< ten<<" "<< convert(mon) << endl;
}

int main() {
	int n;
	cin >> n;
	cin.ignore();
	SinhVien a[n];
	for(int i = 0; i < n; i++){
		a[i].nhap();
	}
	int q;
	cin >> q;
	cin.ignore();
	while(q--) {
		string nganh;getline(cin, nganh);
		string ng = convert(nganh);
		cout << "DANH SACH GIANG VIEN BO MON " << ng << ":" << endl;
		
		for(int i = 0; i < n; i++){		
			if(ng == convert(a[i].getMon())){
				a[i].in();
			}
		}
	}
}
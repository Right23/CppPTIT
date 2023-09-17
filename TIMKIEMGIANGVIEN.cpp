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
		string getTen(){
			return this->ten;
		}
		
};
int  SinhVien :: cnt = 0;
/////

void SinhVien :: nhap(){
	++cnt;
	string s = to_string(cnt);
	if(s.size() < 2) s = "0" + s;
	ma = "GV" + s;
	getline(cin, ten);
	getline(cin, mon);
}
void SinhVien :: in(){
	cout << ma <<" "<< ten<<" "<< convert(mon) << endl;
}
bool tim(string name, string word){
	for(char &x : name) x = tolower(x);
	for(char &x : word) x = tolower(x);
	return name.find(word) != string :: npos;
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
		string s; cin >> s;
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl;
		for(SinhVien x : a){
			if(tim(x.getTen(), s)){
				x.in();
			}
		}
	}
}




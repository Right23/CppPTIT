#include<bits/stdc++.h>
using namespace std;

class sv {
	private:
		string ma, ten, mon;
	public:
		static int cnt;
		void nhap();
		void in();
		string getTen(){
			return this->ten;
		}
		string getMa(){
			return this->ma;
		}
};
string convert(string s){
	stringstream ss (s);
	vector <string> v;
	string word, res = "";
	while(ss >> word){
		v.push_back(word);
	}
	for(int i = 0; i < v.size(); i++){
		res += toupper(v[i][0]);
	}return res;
}
void viethoa(string &s){
	for(char &x : s) x = toupper(x);
}
string getname(string name){
	string res, word;
	stringstream ss (name);
	while(ss >> word){
		res  = word;
	}
	return res;
}
int sv :: cnt = 0;
void sv :: nhap(){
	++cnt;
	string s = to_string(cnt);
	s =  string(2 - s.size(), '0') + s;
	ma = "GV" + s;
	getline(cin, ten);
	getline(cin, mon);
}
void sv :: in(){
	cout << ma <<" "<< ten <<" "<< convert(mon) << endl;
}

bool cmp(sv a, sv b){
	if(getname(a.getTen()) != getname(b.getTen())){
		return getname(a.getTen()) < getname(b.getTen());
	}
	else return a.getMa() < b.getMa();
}
int main(){
	int n;
	cin >> n;
	cin.ignore();
	sv ds[n];
	for(int i = 0; i < n; i++) {
		ds[i].nhap();
	}
	sort(ds, ds + n, cmp);
	for(int i = 0; i < n; i++){
		ds[i].in();
	}
}

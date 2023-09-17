#include<bits/stdc++.h>
using namespace std;

class sv {
	private:
		string ma, ten;
		int sl;
	public:
		sv(){
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
ostream& operator << (ostream& out, sv a){
	cout << a.ma <<" "<< a.ten <<" "<< a.sl;
	return out;
}
istream& operator >> (istream& in, sv &a){
	cin >> a.ma; cin.ignore();
	getline(cin, a.ten);
	cin >> a.sl;
	return in;
}
bool cmp(sv a, sv b){
	if(a.getSl() == b.getSl()){
		return a.getMa() < b.getMa();
	}
	else return a.getSl() > b.getSl();
}
int main(){
	int n; cin >> n;
	sv a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		cout << a[i] << endl;
	}
}
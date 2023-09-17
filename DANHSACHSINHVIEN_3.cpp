#include<bits/stdc++.h>
using namespace std;
struct SinhVien {
	string ma = "B20DCCN",ten,lop,ns;
	float gpa;
};
string chuantu(string s) {
	for(int i = 1; i < s.length(); i++) {
		s[i] = tolower(s[i]);
	}
	s[0] = toupper(s[0]);
	return s;
}
void chuanchuoi(string s) {
	string tmp;
	stringstream ss (s);
	while(ss >> tmp) {
		cout << chuantu(tmp) << " ";
	}
}
void nhap(SinhVien a[], int n) {
	for(int i= 0; i < n; i++) {
		cin.ignore();
		getline(cin, a[i].ten);
		cin >> a[i].lop;
		cin >> a[i].ns >> a[i].gpa;
		string s = to_string(i + 1);
		s = string(3 - s.size(),'0') + s;
		a[i].ma += s;
		if(a[i].ns[1] =='/') {
			a[i].ns = "0" + a[i].ns;
		}//
		if(a[i].ns[4] == '/') {
			a[i].ns.insert(3,"0");
		}
	}
}
////
void in(SinhVien a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << a[i].ma << " ";
		chuanchuoi(a[i].ten);
		cout  << a[i].lop << " " << a[i].ns <<" " << fixed << setprecision(2) << a[i].gpa << endl;
	}
}

//////////
bool cmp(SinhVien a, SinhVien b){
	return a.gpa > b.gpa;
}
void sapxep(SinhVien a[], int n){
	sort(a, a + n, cmp);
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
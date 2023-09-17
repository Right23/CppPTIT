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
//string chuan(string s){
//	string word, res = "";
//	stringstream ss(s);
//	while(ss >> word){
//		word[0] = toupper(word[0]);
//		for(int i = 1; i < word.length(); i++){
//			word[i] = tolower[word[i]];
//		}
//		res = res + word + " ";
//	}
//	return res;
//}
void nhap(SinhVien a[], int n) {
	for(int i= 0; i < n; i++) {
		cin.ignore();
		getline(cin, a[i].ten);
		cin >> a[i].lop;
		cin >> a[i].ns >> a[i].gpa;
		if(a[i].ns[1] =='/') {
			a[i].ns = "0" + a[i].ns;
		}//
		if(a[i].ns[4] == '/') {
			a[i].ns.insert(3,"0");
		}
	}
}
void in(SinhVien a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << a[i].ma << setfill('0') << setw(3) << i + 1<< " ";
		chuanchuoi(a[i].ten);
		cout  << a[i].lop << " " << a[i].ns <<" " << fixed << setprecision(2) << a[i].gpa << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
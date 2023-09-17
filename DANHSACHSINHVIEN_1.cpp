#include<bits/stdc++.h>
using namespace std;
struct SinhVien {
	string ten, ma, lop, ns;
	float gpa;
};
void nhap(SinhVien p[], int n) {
	for(int i = 0; i < n; i++) {
		p[i].ma = "B20DCCN";
		cin.ignore();
		getline(cin, p[i].ten);
		getline(cin, p[i].lop);
		cin >> p[i].ns >> p[i].gpa;
		if(p[i].ns[1] == '/') {
			p[i].ns = "0" + p[i].ns;
		}
		//
		if(p[i].ns[4] == '/') {
			p[i].ns.insert(3, "0");
		}
	}
}
void in(SinhVien p[], int n) {
	for(int i = 0; i < n; i++) {
	    cout << p[i].ma ;
/*		string s = to_string(i + 1);
		s = string(3 - s.size(), '0') + s;
	while(s.size() < 3) s = "0" + s;
	*/
	cout << setfill('0') << setw(3) << i + 1 << " ";
		cout << p[i].ten << " " << p[i].lop <<" " << p[i].ns << " " << fixed << setprecision(2) << p[i].gpa << endl;
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
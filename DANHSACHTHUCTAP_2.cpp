#include<bits/stdc++.h>
using namespace std;

struct sv {
	int id;
	string msv, ten, lop, email, dn;
};
void nhap(sv a[], int n) {
	for(int i = 0; i < n; i++) {
		a[i].id = i + 1;
		cin >> a[i].msv;
		cin.ignore();
		getline(cin, a[i].ten);
		cin >> a[i].lop >> a[i].email >> a[i].dn;
	}
}
//

// 
string chuanhoa(string name){
	stringstream ss (name); 
	string word, res = "";
	while(ss >> word){
		res += word;
	}return res;
}
bool cmp(sv a, sv b){
	return a.msv < b.msv;
}

int main() {
	int n;
	cin >> n;
	cin.ignore();
	sv ds[n];
	nhap(ds, n);
	sort(ds, ds + n, cmp);
	int q; cin >> q;
	cin.ignore();
	while(q--){
		string td; cin >> td;
		for(int i = 0; i < n; i++){
			if(ds[i].dn == td){
				cout << ds[i].id <<" "<< ds[i].msv <<" "<< ds[i].ten <<" "<< ds[i].lop <<" "<< ds[i].email <<" "<< ds[i].dn << endl; 
			}
		}
	}
}

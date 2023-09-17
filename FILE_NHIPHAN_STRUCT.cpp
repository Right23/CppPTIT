#include<bits/stdc++.h>
using namespace std;
//

//// mo tep tn theo che do de ghi nhi phan bang doi tuong fstream
////////fstream< ten bien tep>(<ten tep tin>, ios :: in|ios :: binary);
////////
////////file.read(data, sizeof(data));
////ghi vao tep bang thao tac write();
////////<ten bien tep>. write(char * <data>, int <sizeof(data)>);
////////<ten bien tep>.close();
//// du lieu kieu cau truc phai duoc doc/ ghi dang nhi phan
//// tham so thu nhat la con tro kieu char tro den vung du lieu can ghi vao tep.
//// Vi con tro bat buoc co kieu char nen khi muon ghi du lieu co kieu khac vao tep
//// ta dung ham ep kieu:
////////reinterprete_cast<char *>(<data>)
//int main(){
////	fstream file ("data.in", ios :: in|ios :: binary);
////	oftream file("data.in");
////	file.open("data.in", ios :: out | ios :: binary);
////	char letter = 'A';
////	file.write(char *letter, int sizeof(letter));
//	//
//	char c; cin >> c;
//	
//	// ghi vao tep tin theo che do nhi phan	
//	fstream f("a.dat", ios :: out | ios :: binary);
//	f.write(&c, sizeof(c));
//	f.close();
//	f.open("a.dat", ios :: in | ios :: binary);
//	f.read(&c, sizeof(c));
//	cout << "du lieu doc duoc : " << c;
//	f.close();
//}
struct nv {
	string ma, ten;
	float hs, lcb, pc, tong;
};
void nhap(nv &a) {
	cin >> a.ma;
	cin.ignore();
	getline(cin, a.ten);
	cin >> a.hs >> a.lcb >> a.pc;
	a.tong = a.lcb * a.hs + a.pc;
}
void xuat(nv a){
	cout << a.ma <<" "<< a.ten <<" "<< fixed << setprecision(2) << a.tong << endl;
}
bool cmp(nv a, nv b){
	if(a.tong != b.tong) return a.tong > b.tong;
	else return a.ma > b.ma;
}
void sapxep(nv a[], int n){
	sort(a, a + n, cmp);
}
void nhap1(nv a[], int n){
	for(int i = 0; i < n; i++){
		cin >> a[i].ma;
		cin.ignore();
		getline(cin, a[i].ten);
		cin >> a[i].hs >> a[i].lcb >> a[i].pc;
		a[i].tong = a[i].hs * a[i].lcb + a[i].pc;
	}
}
void xuat1(nv a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i].ma <<" "<< a[i].ten <<" "<< a[i].tong << endl;
	}
}

int main() {
	int n;
	cin >> n;
	nv a[n];
	nhap1(a, n);
	//
	sapxep(a, n);
	fstream f("a.dat", ios :: out | ios :: binary);
	f.write(reinterpret_cast <char *> (a), sizeof(a));
	f.close();
	f.open("a.dat", ios :: in | ios :: binary);
	f.read(reinterpret_cast <char *> (a), sizeof(a));
//	cout << "Du lieu doc duoc : \n" << a << endl;
	xuat1(a, n);
}
//int main(){
//	int n; cin >> n;
//	nv a[n];
//	nhap1(a, n);
//	sapxep(a, n);
//	fstream f("a.dat", ios :: out | ios :: binary);
//	f.write(reinterpret_cast <char *> (a), sizeof(a));
//	f.close();
//	f.open("a.dat", ios :: in | ios :: binary);
//	f.read(reinterpret_cast <char *> (a), sizeof(a));
//	xuat1(a, n);
//}

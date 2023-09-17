#include<bits/stdc++.h>
using namespace std;
struct h{
	string ten, nhom;
	float mua, ban;
	int id;
};
bool cmp(h a, h b){
	return (a.ban - a.mua) >(b.ban - b.mua);
}
void in(h a[], int n){
	for(int i = 0; i < n; i++){
		a[i].id = i + 1;
		cin.ignore();
		getline(cin, a[i].ten);
		getline(cin, a[i].nhom);
		cin >> a[i].mua >> a[i].ban;
	}
	sort(a, a + n, cmp);
}
void out(h a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i].id <<" "<< a[i].ten <<" "<< a[i].nhom <<" "<< fixed << setprecision(2) << a[i].ban - a[i].mua << endl;
	}
}
int main(){
	int n; cin >> n;
	h ds[100];
	in(ds, n);
	out(ds, n);
	return 0;
}
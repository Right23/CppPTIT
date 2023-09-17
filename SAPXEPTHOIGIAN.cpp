#include<bits/stdc++.h>
using namespace std;
struct tg{
	int h, m, s;
};
void nhap(tg a[], int n){
	for(int i = 0; i < n; i++){
		cin >> a[i].h >> a[i].m >> a[i].s;
	}
}
void in(tg a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i].h <<" "<< a[i].m <<" "<< a[i].s << endl;
	}
}
bool cmp(tg a, tg b){
	if(a.h != b.h) return a.h < b.h;
	if(a.m != b.m) return a.m < b.m;
	if(a.s != b.s) return a.s < b.s;
}
void sapxep(tg a[], int n){
	sort(a, a + n, cmp);
}
int main(){
	int n; cin >> n;
	tg ds[n];
	nhap(ds, n);
	sapxep(ds, n);
	in(ds, n);
}
#include<bits/stdc++.h>
using namespace std;
/////////////giai thua
int gt(int n){
	if(n == 0) return 1;
	else return n * gt(n - 1);
}
//////////to hop chap k cua n
int nCk(int n, int k) {
	if(k == 0 || k == n)
		return 1;
	else return nCk(n - 1, k - 1) + nCk(n - 1, k);
}
//////////////////chinh hop chap k cua n
int nAk(int n, int k) {
	return gt(k) * nCk(n, k);
}
/////////////kiem tra mang doi xung
int palin(int a[], int l, int r){
	if(l > r) return 1;
	if(a[l] != a[r]) return 0;
	else return palin(a, l + 1, r - 1);
}
/////////////////so phan tu
int count(int n){
	if(n < 10) return 1;
	else return 1 + count(n / 10);
}
//////////////////chuyen thap sang nhi phan
int tentotwo(int x){
	if(x == 0) 
		return 0;
	else {
		int r = x % 2;
		tentotwo(x / 2);
		cout << r;
	}
}
int main() {
	int n; cin >> n;
	tentotwo(n);
}
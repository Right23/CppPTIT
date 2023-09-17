#include<bits/stdc++.h>
using namespace std;
// ktao cau hinh dau tien
// while(khi chua phai cau hinh cuoi cung){
// in ra cau hinh hien tai
// sinh ra cau hinh tiep theo
//}
int a[100], n, m, ok;
void ktao(){
	for(int i = 1; i <= n + m; i++){
		a[i] = 0;
	}
}
// 
void sinh(){
	// bat dau tu bit cuoi cung, va di tim bit 0 dau tien
	int i = n + m;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0){
		ok = 0;// day chinh la cau hinh cuoi cung;
	}else{
		a[i] = 1;
	}
}
 // ma tran n hang m cot
// tu vi tri (0, 0) phai di n + m buoc de toi diem n + m
// goi cach di len tren la 0, di sang phai la 1
bool ck(){
	int cnt = 0;
	for(int i = 1; i <= n + m; i++){
		cnt += a[i];
	}
	return cnt == m;
}
int main(){
	cin >> n >> m; 
	ok = 1;
	ktao();
	while(ok){
		if(ck()){
			for(int i = 1; i <= n + m; i++){
				cout << a[i];
			}
			cout << " ";
		}
		cout << endl;
		sinh();
	}
}
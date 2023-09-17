#include<bits/stdc++.h>
using namespace std;
//ktao
//while(chua phai cau hinh cuooi cung0{
//in ra cau hinh hien tai
//sinh ra cau hinh tiep theo}
int n, a[100], ok;
void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}
//
void sinh(){
	int i = n;// bat dau tu chi so cuoi cung
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0){
		ok = 0;// day la cau hinh cuoi cung;
	}
	else{
		a[i] = 1;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		ktao();
		ok = 1;
		while(ok){
			for(int i = 1; i <= n; i++){
				cout << a[i];
			}
			cout <<" ";
			sinh();
			
		}
		cout << endl;
	}
}
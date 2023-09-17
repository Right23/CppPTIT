#include<bits/stdc++.h>
using namespace std;
// 1: cac ứng viên là các giá trị đồng tiền
// 2: hàm lựa chọn chọn các giá trị tiền lớn nhất 
//    mà số tiền còn lại lớn hơn
// 3: hàm thực thi: nếu số tiền còn lại nhỏ hơn 
//    giá trị a[i] hiện tại thì ta k chọn mệnh giá đó
// 4: hàm mục tiêu: tìm số lượng đồng tiền nhỏ nhất cần dùng
void dem(int n){
	int a[10] = {1, 2, 5, 10 , 20, 50 , 100 , 200, 500, 1000};
	int cnt = 0;
	for(int i = 9; i >= 0; i--){
		cnt += n/a[i];// cộng thêm số lượng đồng tiền mệnh giá a[i]
		n = n % a[i];// tìm số tiền còn dư
	}
	cout << cnt << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		dem(n);
		
	}
}
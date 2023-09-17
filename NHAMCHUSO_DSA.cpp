#include<bits/stdc++.h>
using namespace std;

//1: tập các ứng viên là 5, 6
//2:  hàm lựa chọn thay đổi các số 5 hoặc 6 trong xâu số
//3: hàm thục thi:hàm tìm max thì đổi 5->6, tìm min thì đổi 6->5
//4: hàm mục tiêu tính tổng lớn nhất và nhỏ nhất thu được

void minv(string a, string b) {
	for(char &x : a) {
		if(x == '6') x ='5';
	}
	for(char &x : b) {
		if(x == '6') x = '5';
	}
	cout << stoll(a) + stoll(b) <<" ";
}
void maxv(string a, string b) {
	for(char &x : a) {
		if(x == '5') x ='6';
	}
	for(char &x : b) {
		if(x == '5') x = '6';
	}
	cout << stoll(a) + stoll(b);
}
int main(){
	string a, b; 
	cin >> a >> b;
	minv(a, b);
	maxv(a, b);
}

#include<bits/stdc++.h>
using namespace std;
void chuyen(int n, int a, int b, int c){
	if(n == 1){
		cout << char(a + 64) <<" -> "<< char(c + 64) << endl;
	}
	else{
		chuyen(n - 1, a, c, b);
		chuyen(1, a, b, c);
		chuyen(n - 1, b, a, c);
	}
}
int main(){
	int n;
	cin >> n;
	chuyen(n, 1, 2, 3);
//	chuyen(3, 1, 2, 3);
}
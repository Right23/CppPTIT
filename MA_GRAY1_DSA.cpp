#include<bits/stdc++.h>
using namespace std;
void gray(int n){
	int m = pow(2, n);// so luong ma gray thu n
	string s[m + 5];
	s[1] = "0";
	s[2] = "1";
	if(n > 1){
		int vt = 2;// vi tri lay doi xung ban dau
		for(int i = 2; i <= n; i++){
			int k = pow(2, i); // so luong ma gray thu i
			for(int j = 1; j <= vt; j++){
				s[k - j + 1] = "1" + s[j];
				s[j] = "0" + s[j];
			}
			vt = k;
		}
	}
	for(int i = 1; i <= m; i++){
		cout << s[i] <<" ";
	}
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		gray(n);
	}
}
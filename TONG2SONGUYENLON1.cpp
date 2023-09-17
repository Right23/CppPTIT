#include<bits/stdc++.h>
using namespace std;
string sum(string a, string b){
	while(a.length() < b.length()) a = "0" + a;
	while(b.length() < a.length()) b = "0" + b;
	int r = 0, tmp;
	string res = "";
	for(int i = a.length() - 1; i >= 0; i--){
		tmp = a[i] + b[i] - '0' - '0' + r ;
		r = tmp / 10;
		tmp %= 10;
		res = (char)(tmp + '0') + res;
	}
	if(r > 0) res = "1" + res;
	return res;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string a, b;
		cin >> a>> b;
		cout << sum(a, b) << endl;
	}
}
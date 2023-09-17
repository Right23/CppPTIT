#include<bits/stdc++.h>
using namespace std;
string sub(string a, string b) {
	while(a.length() < b.length()) a = "0" + a;
	while(b.length() < a.length()) b = "0" + b;
	int r = 0, tmp;
	string res = "";
	for(int i = a.length() - 1; i >= 0; i--) {
		tmp = int(a[i] - '0') - int(b[i] - '0') - r;
		if(tmp < 0){
			r = 1;
			res = char(tmp + 10 + '0') + res;
		}
		else{
			r = 0;
			res = char(tmp + '0') + res;
		}
	}
//	while(res.size() > 1 && res[0] == '0'){
//		res.erase(0, 1);
//	}BO SO 0 ;
	return res;
}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string a, b;
		cin >> a>> b;
		cout << sub(a, b) << endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
#define sz size()

void solve(int k, string a, string b){
	while(a.sz > b.sz) b = "0" + b;
	while(a.sz < b.sz) a = "0" + a;
	string res = "";// luu vao res
	int nho = 0;
	int len = a.sz;
	for(int i = len - 1; i >= 0; i--){
		//total la tong 2 so hien tai
		int total = int(a[i] - '0' + b[i] - '0') + nho;
		res = char(total%k + '0') + res;
		nho  = total/k;
	}
	if(nho > 0) res = to_string(nho) + res;
	cout << res << endl;
	
}
int main(){
	int t; cin >> t;
	while(t--){
		int k;
		string a, b;
		cin >> k >> a >> b;
		solve(k, a, b);
	}
}
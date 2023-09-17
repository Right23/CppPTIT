#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll binarytoDecimal(string s){
	ll dec_value = 0;
	int len = s.length();
	ll base = 1;
	for(int i = len - 1; i >= 0; i--){
		if(s[i] == '1'){
			dec_value += base;
		}
		base *= 2;
	}
	return dec_value;
}
int main(){
	string s; 
	cin >> s;
	cout << binarytoDecimal(s);
}

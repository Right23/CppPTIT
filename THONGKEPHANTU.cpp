#include<bits/stdc++.h>
using namespace std;

int main() {
	string a[10000];
	int c[10000] = {0};
	string s;
	getline(cin, s);
	string digit;
	stringstream ss (s);
	int na = 0;
	while(ss >> digit){
		a[na] = digit;
		na++;
		c[stoi(digit)]++;
	}
	string b[10000];
	int nb = 0;// so phan tu cua b;
	for(int i = 0; i < na; i++){
		int fl = 1;
		for(int j = 0; j < i; j++){
			if(a[i] == a[j]){
				fl = 0; break;
			}
		}
		if(fl){
			b[nb] = a[i];
			nb++;
		}
	}
	for(int i = 0; i < nb; i++){
		cout << b[i] <<" "<< c[stoi(b[i])] << endl;
	}
}
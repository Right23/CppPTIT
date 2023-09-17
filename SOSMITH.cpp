#include<bits/stdc++.h>
using namespace std;
int snt (int n) {
	if(n < 2) return 0;
	for(int i = 2; i * i <= n; i++) {
		if(n % i == 0) return 0;
	}
	return 1;
}
int sum(int n) {
	int s = 0;
	while(n > 0) {
		s += n%10;
		n /= 10;
	}
	return s;
}
int sm(int n) {
	int s = sum(n);// tong cac chu so cua n;
	int SUM = 0;// tong cac chu so cua cac uoc cua n;
	for(int i = 2; i * i <= n; i++) {
		while(n % i == 0) {
			SUM += sum(i);
			n /= i;
		}
	}
	if( n != 1) {
		SUM += sum(n);
	}
	if(s == SUM) {
		return 1;
	} else return 0;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		if(!snt(n) && sm(n)){
			cout << "YES\n";
		}else cout << "NO\n";
	}
}
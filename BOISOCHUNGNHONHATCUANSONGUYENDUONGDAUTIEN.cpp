#include<bits/stdc++.h>
using namespace std;
long gcd(long a, long b){
	while(b != 0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
long lcm(long a, long b){
	return a * b / gcd(a, b);
}
int main(){
	int t; cin >> t;
	while(t--){
		long a, c = 1;
		cin >> a;
		for(long i = 2; i <= a; i++){
			c = lcm(i, c);
		}
		cout << c << endl;
	}
}
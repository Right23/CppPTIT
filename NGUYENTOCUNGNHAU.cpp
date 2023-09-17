#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(b == 0) return a;
	else{
		return gcd(b, a % b);
	}
}
int snt(int x){
	if(x < 2) return 0;
	for(int i = 2; i * i <= x; i++){
		if(x % i == 0) return 0;
	}return 1;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int c = 0;
		int x; cin >> x;
		for(int i = 1; i <= x; i++){
			if(gcd(i, x) == 1){
				c++;
			}
		}
		if(snt(c)){
			cout << 1<< endl;
		}else cout << 0 << endl;
	}
}
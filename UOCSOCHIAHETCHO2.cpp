#include<bits/stdc++.h>
using namespace std;

int u2(long x){
	int cnt = 0;
	if(x % 2 == 1) return 0;
	for(long i = 1; i * i <= x ; i++){
		if(x % i == 0){
		    if(i % 2 == 0) cnt++;
		    if((x / i) % 2 == 0) cnt++;
		    if(i * i == x && x % 2 == 0) cnt--;
		}
	}return cnt;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		long n;
		cin >> n;
		cout << u2(n) << endl;
	}
}
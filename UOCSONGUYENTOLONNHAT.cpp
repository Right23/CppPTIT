#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long n; cin >> n;
		long a = 1;
		for(long i = 2; i * i <= n; i++){
			while(n % i == 0){
				n /= i;
				a = max(i, a);
			}
		}
		if(n != 1) a = max(a, n);
		cout << a << endl;
	}
}
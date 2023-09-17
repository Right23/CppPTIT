#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
	long long n; cin >> n;
		long long sum = 0;
		for(long long i = 1; i*i <= n; i++){
			if(n % i == 0) sum = sum + i + n/i;
			if(i * i  == n){
				sum -= i;
			}
		}
		cout << sum << endl;
	}
}
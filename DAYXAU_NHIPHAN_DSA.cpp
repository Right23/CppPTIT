#include<iostream>
using namespace std ;
typedef long long ll;
int main() {
	ll n, k;
	ll a[93];
	a[1] = 1, a[2] = 1;
	for(int i = 3; i < 93; i++){
		a[i] = a[i - 1] + a[i - 2];
	}
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		while(n > 2){
			if(k > a[n - 2]){
				k -= a[n - 2];
				n--;
			}else n -= 2;
		}
		cout << n - 1 << endl;
	}
}

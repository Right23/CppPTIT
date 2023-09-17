#include<bits/stdc++.h>
using namespace std;

long long a[93];
void kt(){
	a[0] = 0;a[1] = 1;
	for(int i = 2; i <= 92; i++){
		a[i] = a[i - 1] + a[i - 2];
	}
}
int main() {
	int t;
	cin >> t;
	kt();
	while(t--) {
		long long n; cin >> n;
		int ck = 0;
		for(int i = 0; i < 93; i++ ){
			if(n == a[i]){
				ck = 1; break;
			}
		}
		if(ck) cout << "YES\n";
		else cout << "NO\n";
	}
}
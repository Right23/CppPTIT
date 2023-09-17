#include<bits/stdc++.h>
using namespace std;

bool nt(int x) {
	if(x == 1 || x == 0) return false;
	for(int i = 2; i * i <= x; i++) {
		if(x % i == 0) return false;
	}
	return true;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		bool ck = false;
		int a, b;
		for(int i = 2; i <= n; i++){
			if(nt(n - i) && nt(i)){
			    a = i;
			    b = n - i;
				ck = true;
				break;
			}
		}
		if(ck){
			cout << a << " " << b << endl;
		}else cout << "-1" << endl;
		
	}
}
#include<bits/stdc++.h>
using namespace std;
bool ok(int n){
	return n == 1 || n == 5;
}
int main() {
////byhoa
	char s;
	cin >> s;
	int n = (int)(s - 64);
	int a[n];
	for(int i = 0; i < n; i++) {
		a[i] = i + 1;
	}
	do {
		int ck = 1;
		for(int i = 0; i < n; i++) {
			if(ok(a[i])){
				if(i == 0 || i == n - 1) continue;
				if(!ok(a[i - 1]) && !ok(a[i + 1])){
					ck = 0;
				}
			}
			if(!ck) break;
		}
		if(ck) {
			for(int i = 0; i < n; i++) {
				cout << (char)(a[i] + 64);
			}
			cout << endl;
		}
	} while(next_permutation(a, a + n)); //neu ma la cau hinh cuoi cung roi se return false-> break;

}



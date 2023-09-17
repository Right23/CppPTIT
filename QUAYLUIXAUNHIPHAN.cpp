#include<bits/stdc++.h>
using namespace std;
int n, x[100], k;
//k = so bit1
void inkq() {
	for(int i = 1; i <= n; i++) {
		cout << char(x[i] + 64);
	}
	cout << endl;
}
//bool check() {
//	int dem = 0, res = 0;
//	for(int i = 1; i <= n; i++) {
//		if(x[i] == 1) {
//			dem++;
//		} else {
//			dem = 0;
//		}
//		if(dem > k) {
//			return false;
//		} else if(dem == k) {
//			res++;
//		}
//	}
//	return res == 1;
//}
void Try(int i) {
	// duyet cac kha nang cua x[i]
	for(int j = 0; j <= 1; j++) {
		x[i] = j;
		if(i == n) {				
			inkq();
			
		} else {
			Try(i + 1);
		}
	}
}
int main() {
	cin >> n >> k;
	Try(1);
	return 0;
}

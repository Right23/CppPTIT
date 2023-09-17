
#include<bits/stdc++.h>
using namespace std;
int n, x[100];
bool used[100];
void inkq() {
	for(int i = 1; i <= n; i++) {
		cout << x[i];
	}
	cout << endl;
}
//int cnt = 0;// so cau hinh
//int dem = 0;// so lan goi backtrack
void Try(int i) {
//	dem++;
	for(int j = 1; j <= n; j++) {
		if(!used[j]) {
			x[i] = j;
			used[j] = true;
			if(i == n) {
				int ck = 1;
				for(int k = 1; k <= n  - 1; k++) {
					if(abs(x[k] - x[k + 1]) == 1) {
						ck = 0;
						break;
					}
				}
				if(ck) {
					inkq();
//					cnt++;
				}
			} else {
				Try(i + 1);

			}
			// backtrack
			used[j] = false;
		}
	}
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 1; i <= n; i++) {
			used[i] = false;
		}
		Try(1);
//	cout << cnt << endl << dem;
	}
	return 0;
}
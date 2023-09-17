
#include<bits/stdc++.h>
using namespace std;
int n, x[100];
bool used[100];
void inkq() {
	for(int i = 1; i <= n; i++) {
		cout << (char)(x[i] + 64);
	}
	cout <<" ";
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
				inkq();
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
		string s;
		cin >> s;
		n = s.size();
		for(int i = 1; i <= n; i++) {
			used[i] = false;
		}
		Try(1);
		cout << endl;
	}
//	cout << cnt << endl << dem;
	return 0;
}
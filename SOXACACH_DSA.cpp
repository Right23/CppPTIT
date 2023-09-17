
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
bool ck() {
	bool fl = true;
	for(int i = 1; i < n; i++) {
		if(abs(x[i] - x[i + 1]) == 1) {
			fl = false;
			break;
		}
	}
	return fl;
}

void Try(int i) {
	for(int j = 1; j <= n; j++) {
		if(!used[j]) {
			x[i] = j;
			used[j] = true;
			if(i == n) {
				if(ck()) {
					inkq();
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
	}

	return 0;
}
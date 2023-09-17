
#include<bits/stdc++.h>
using namespace std;
int n, k, x[100];
bool used[100];
int a[30][30];

vector<int> Res;
int sum = 0;
void Try(int i) {
//	dem++;
	for(int j = 1; j <= n; j++) {
		if(!used[j]) {
			x[i] = j;
			used[j] = true;
			if(i == n) {
				sum = 0;
				for(int m = 1; m <= n; m++) {
					sum += a[m][x[m]];
				}
				if(sum == k) {
					for(int m = 1; m <= n; m++) {
						Res.push_back(x[m]);
					}
				}
			} else {
				Try(i + 1);

			}
			// ba1cktrack
			used[j] = false;
		}
	}
}
int main() {
	cin >> n >> k;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	memset(used, false, sizeof(used));
	Try(1);
	cout << Res.size()/n << endl;
	for(int i = 0; i < Res.size(); i++) {
		if(i % n == 0) cout << endl;
		cout << Res[i] <<" ";
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int n, k, s, x[100];

int cnt = 0;// dem so cau hinh
void Try(int i) {
	for(int j = x[i - 1] + 1; j <= n - k + i; j++) {
		x[i] = j;
		if(i == k) {
			int sum = 0;
			for(int m = 1; m <= k; m++) {
				sum += x[m];
			}
			if(sum == s) {
				cnt++;
			}
		} else Try(i + 1);
	}
}
int main() {
	while(cin >> n >> k >> s) {
		if(n == k && n == s && n == 0) return 0;
		x[0] = 0;
		cnt = 0;
		Try(1);
		cout << cnt << endl;
		
	}
	return 0;
}
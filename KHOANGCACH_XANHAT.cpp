#include<bits/stdc++.h>
//o n^2
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int max = -1;
		for(int i = 0; i < n - 1; i++) {
			for(int j = n - 1; j >= i + 1; j--) {
				if(a[i] < a[j]) {
					int tmp = j - i;
					if(tmp > max) max = tmp;
					break;//do la lay max len gap la ket thuc luon
				}
			}
		}
		cout << max << endl;
	}
}
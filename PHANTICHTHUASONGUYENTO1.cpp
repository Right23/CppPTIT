#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		int n;
		cin >> n;

		for(int i = 2; i <= n; i++) {
			int mu = 0;
			while(n % i == 0) {
				mu++;
				n /= i;
			}
			if(mu != 0) {
				cout << i << "(" <<  mu << ")" <<" ";
			}
		}
		cout << endl;
	}
}
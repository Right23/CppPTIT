#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n, i = 2 , k; cin >> n >> k;
		int cnt = 0;
		while(n != 1){
			if(n % i == 0){
				cnt ++;
				if(cnt == k){
					cout << i << endl;
				}
				else{
					n /= i;
				}
			}
			else i++;
		}
		if(cnt < k) cout << "-1" << endl;
	}
}
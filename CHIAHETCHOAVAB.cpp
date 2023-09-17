#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		int m, n, a,b;
		cin >> m >> n >> a >> b;
		int cnt = 0;
		for(int i = m; i <= n; i++){
			if(i % a == 0 || i % b == 0){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}
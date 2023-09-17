#include <bits/stdc++.h>
using namespace std;

int fb(int x){
	int a = 5 * x * x - 4;
	int b = 5 * x * x + 4;
	if((float)sqrt(a) == (int)sqrt(a) || (float)sqrt(b) == (int)sqrt(b)){
		return 1;
	}return 0;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int b[n];
		for(int i = 0; i < n; i++) {
			cin >> b[i];
		}
		for(int i = 0; i < n; i++) {
			if(fb(b[i])) cout << b[i] << " ";
		}
		cout << endl;
	}
}
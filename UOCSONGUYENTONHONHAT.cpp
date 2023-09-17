#include<bits/stdc++.h>
using namespace std;

int snt(long long x){
	if(x < 2) return 0;
	for(long long i = 2; i * i <= x; i++){
		if(x % i == 0) return 0;
	}return 1;
}
void chan1(int x){
	if(snt(x)) cout << x << " ";
	else if(x % 2 == 0){
		cout << 2 << " ";
	}else{
		int usl = x;
		for(int i = 3; i <= x / 2; i++){
			if(x % i == 0){
				usl = min(usl, i);
			}
		}
		cout << usl << " ";
	}
}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		int n; cin >> n;
		cout << 1 << " ";
		for(int i = 2; i <= n; i++){
			chan1(i);
		}
		cout << endl;
	}
}
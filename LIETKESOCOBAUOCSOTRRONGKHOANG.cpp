#include<bits/stdc++.h>
using namespace std;
int snt(long long x){
	if(x < 2) return 0;
	for(int i = 2; i * i <= x; i++){
		if(x % i == 0) return 0;
	}return 1;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		long long a, b;
		cin >> a >> b;
		int cnt = 0;
		for(long long i = a; i * i <= b; i++){
			if(snt(i)){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}
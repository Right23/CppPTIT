#include<bits/stdc++.h>
using namespace std;

long long gcd(long a, long b){
	if(b == 0) return a;
	else{
		return gcd(b, a % b);
	}
}
long long lcm(long a, long b){
	return a * b / gcd(a, b);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long x, y, z, n; 
		cin >> x >> y >> z >> n;
		int ck = 0;
		long long c3 = lcm(x, lcm(y, z));
		long long res= pow(10, n - 1) / c3;
		if(res * c3 != pow(10, n - 1)){
			res += 1;
		}
		long long ans = res * c3;
		if(ans < pow(10, n)){
			cout << ans << endl;
		}else cout << -1 << endl;
	}
}
#include <iostream>
#include <math.h>
using namespace std;
using ll = long long;
const ll r = pow(10,9) + 7;
int t;
long n;
long f[1001];
int main() {
	cin >> t;
	while (t --) {
		cin >> n;
		f[0] = 0;
		f[1] = 1;
		for (long i = 2; i <= n; i++) f[i] = (f[i-1] % r + f[i-2] % r) % r;
		cout << f[n] << endl;
	}
	return 0;
}
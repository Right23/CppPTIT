#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x: a) cin >> x;
	sort(a, a + n);
	int max1 = max(a[n - 1] * a[n - 2], a[0] * a[1]);
	int max2 = max(a[n - 1] * a[n - 2] * a[n - 3], a[n - 1] * a[0] * a[1]);
	int max_p = max(max1, max2);
	cout << max_p << endl;
}
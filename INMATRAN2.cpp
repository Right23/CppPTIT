#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i=a; i<=b; i++)
 #define FORD(i, a, b) for(int i=a; i>=b; i--)
  int main () {
int t;
cin >> t;
while(t--) {
	int n, a[50][50], k=1;
	cin >> n;
	FOR(i, 1, 4*n) {
		FOR(j, 1, 4*n) a[i][j] = k++;
	}
	vector<int> v1(1000), v2(1000);
	int h1=1, h2=4*n, c1=1, c2=4*n, m=1, p=1;
	k--;
	while(k) {
		if(k) FOR(i, h1, h2) {
			v1[m++] = a[i][c1];
			k--;
		}
		c1++;
		if(k) FORD(i, h2, h1) {
			v2[p++] = a[i][c2];
			k--;
		}
		c2--;
		if(k) FOR(i, c1, c2) {
			v1[m++] = a[h2][i];
			k--;
		}
		h2--;
		if(k) FORD(i, c2, c1) {
			v2[p++] = a[h1][i];
			k--;
		}
		h1++;
		if(k) FORD(i, h2, h1) {
			v1[m++] = a[i][c2];
			k--;
		}
		c2--;
		if(k) FOR(i, h1, h2) {
			v2[p++] = a[i][c1];
			k--;
		}
		c1++;
		if(k) FORD(i, c2, c1) {
			v1[m++] = a[h1][i];
			k--;
		}
		h1++;
		if(k) FOR(i, c1, c2) {
			v2[p++] = a[h2][i];
			k--;
		}
		h2--;
	}
	int d=4*4*pow(n, 2);
	reverse(v1.begin() + 1, v1.begin() + d/2+1);
	reverse(v2.begin() + 1, v2.begin() + d/2+1);
	FOR(i, 1, d/2) cout << v2[i] << " ";
	cout << endl;
	FOR(i, 1, d/2) cout << v1[i] << " ";
	cout << endl;
}
}
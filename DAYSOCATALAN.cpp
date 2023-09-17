#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll c[5001][5001];
//ll C[5000];
ll P = 1e9 + 7;
void ktao_tohop() {
	for(int i = 0; i < 5001; i ++) {
		for(int j = 0; j <= i; j++) {
			if(i == j || j == 0) {
				c[i][j] = 1;
			} else {
				c[i][j] = (c[i-1][j-1] + c[i-1][j]) % P;
			}
		}
	}
}


int main() {
	ktao_tohop();
	int n;
	cin >> n;
//	cout << c[2*n][n] / (n + 1);
	cout << c[2 * (n + 1)][n + 1] / (n + 2);
	memset(c, 0, sizeof(c));
//////////	cout << c[2*(n + 1)][n+1] / (n + 2);
//	ll S = 0;
//	for(int k = 0; k <= n; k++) {
//		S += (c[2*k][k] / (k + 1)) * (c[2*(n - k)][n - k] / (n - k + 1));
//	}
//	cout << S;
}
////#include <iostream>
////using namespace std;
////using ll = long long;
////// A dynamic programming based function to find nth
////// Catalan number
////void catalanDP(short int n) {
////	// Table to store results of subproblems
////	ll catalan[n + 1];
////	// Initialize first two values in table
////	catalan[0] = catalan[1] = 1;
////	// Fill entries in catalan[] using recursive formula
////	for (short int i = 2; i <= n ; i++) {
////		catalan[i] = 0;
////		for (short int j = 0; j < i; j++)
////			catalan[i] += catalan[j] * catalan[i - j - 1];
////	}
//////	ll Sn = 0;
//////	for( int i = 0; i <= n; i++){
//////		Sn += catalan[i] * catalan[n - i];
//////	}
//////	cout << Sn;
////	cout << catalan[n];
////}
////
////// Driver code
////int main() {
////	short int n;
////	cin >> n;
////	catalanDP(n);
////	return 0;
////}
////////////////////////
//// C++ program for nth Catalan Number
//#include <iostream>
//using namespace std;
//
//// Returns value of Binomial Coefficient C(n, k)
//unsigned long int binomialCoeff(unsigned int n, unsigned int k) {
//	// Since C(n, k) = C(n, n-k)
//	if (k > n - k)
//		k = n - k;
//	// Calculate value of [n*(n-1)*---*(n-k+1)] / [k*(k-1)*---*1];
//	unsigned long int res = 1;
//	for (int i = 0; i < k; ++i) {
//		res *= (n - i);
//		res /= (i + 1);
//	}
//	return res;
//}
//// A Binomial coefficient based function to find nth catalan
//// number in O(n) time
//unsigned long int catalan(unsigned int n) {
//	// Calculate value of 2nCn
//	unsigned long int c = binomialCoeff(2 * n, n);
//
//	// return 2nCn/(n+1)
//	return c / (n + 1);
//}
//// Driver code
//int main() {
//	unsigned int n;
//	cin >> n;
//	cout << catalan(n);
//	return 0;
//}

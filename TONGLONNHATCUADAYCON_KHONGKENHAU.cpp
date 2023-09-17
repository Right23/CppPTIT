// C++ code to implement the approach

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// Function to find the maximum sum
ll findMaxSum(ll a[100], int N) {
	// Declare dp array
	ll dp[N][2];
	if (N == 1) {
		return a[0];
	}

	// Initialize the values in dp array
	dp[0][0] = 0;
	dp[0][1] = a[0];

	// Loop to find the maximum possible sum
	for (int i = 1; i < N; i++) {
		dp[i][1] = dp[i - 1][0] + a[i];
		dp[i][0] = max(dp[i - 1][1],
		               dp[i - 1][0]);
	}

	// Return the maximum sum
	return max(dp[N - 1][0], dp[N - 1][1]);
}

// Driver Code
int main() {
	// Creating the array
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		ll a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		cout << findMaxSum(a, n) << endl;
	}

	// Function call
	return 0;
}

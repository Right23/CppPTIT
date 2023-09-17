#include<bits/stdc++.h>
using namespace std;

int countTriplets(long arr[], int n, long sum) {
	// Sort input array
	sort(arr, arr+n);

	// Initialize result
	long ans = 0;

	// Every iteration of loop counts triplet with
	// first element as arr[i].
	for (int i = 0; i < n - 2; i++) {
		// Initialize other two elements as corner elements
		// of subarray arr[j+1..k]
		int l = i + 1, r = n - 1;

		// Use Meet in the Middle concept
		while (l < r) {
			// If sum of current triplet is more or equal,
			// move right corner to look for smaller values
			if (arr[i] + arr[l] + arr[r] >= sum)
				r--;

			// Else move left corner
			else {
				// This is important. For current i and j, there
				// can be total k-j third elements.
				ans += (r - l);
				l++;
			}
		}
	}
	return ans;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		long a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		cout << countTriplets(a, n, k) << endl;
	}
}
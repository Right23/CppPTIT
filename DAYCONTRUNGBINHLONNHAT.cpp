// C++ program to find maximum average subarray
// of given length.
#include<bits/stdc++.h>
using namespace std;

// Returns beginning index of maximum average
// subarray of length 'k'
int findMaxAverage(int arr[], int n, int k)
{
	// Check if 'k' is valid
	if (k > n)
		return -1;

	// Create and fill array to store cumulative
	// sum. csum[i] stores sum of arr[0] to arr[i]
	int csum[n];
	
	csum[0] = arr[0];
	for (int i=1; i<n; i++)
	csum[i] = csum[i-1] + arr[i];

	// Initialize max_sm as sum of first subarray
	int max_sum = csum[k-1], max_end = k-1;

	// Find sum of other subarrays and update
	// max_sum if required.
	for (int i=k; i<n; i++)
	{
		int curr_sum = csum[i] - csum[i-k];
		if (curr_sum > max_sum)
		{
			max_sum = curr_sum;
			max_end = i;
		}
	}

	memset(csum, 0, n); // To avoid memory leak

	// Return starting index
	return max_end - k + 1;
}

// Driver program
int main()
{
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int &x  : a) cin >> x;
		int z = findMaxAverage(a, n, k);
		for(int i = z; i <  z + k; i++){
			cout << a[i] <<" ";
		}
		cout << endl;
	}
	return 0;
}

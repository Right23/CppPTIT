/* Dynamic Programming solution to construct
Maximum Sum Increasing Subsequence */
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

// Utility function to calculate sum of all
// vector elements
int findSum(vector<ll> arr) {
	ll sum = 0;
	for (ll i : arr)
		sum += i;
	return sum;
}

// Function to construct Maximum Sum Increasing
// Subsequence
void printMaxSumIS(ll arr[], int n) {
	// L[i] - The Maximum Sum Increasing
	// Subsequence that ends with arr[i]
	vector<vector<ll> > L(n);

	// L[0] is equal to arr[0]
	L[0].push_back(arr[0]);
//1 10 2 2 9 18 20 10
	// start from index 1
	for (int i = 1; i < n; i++) {
		// for every j less than i
		for (int j = 0; j < i; j++) {
			/* L[i] = {MaxSum(L[j])} + arr[i]
			where j < i and arr[j] < arr[i] */
			if ((arr[i] > arr[j])
				&& (findSum(L[i]) < findSum(L[j])))
				L[i] = L[j];
		}

		// L[i] ends with arr[i]
		L[i].push_back(arr[i]);

		// L[i] now stores Maximum Sum Increasing
		// Subsequence of arr[0..i] that ends with
		// arr[i]
	}

	vector<ll> res = L[0];

	// find max
	for (vector<ll> x : L)
		if (findSum(x) > findSum(res))
			res = x;

	// max will contain result
//	for (ll i : res)
//		cout << i << " ";
//	cout << endl;
	ll MAX = 0;
	for(ll i : res){
		MAX += i;
	}
	cout << MAX << endl;
}

// Driver Code
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		ll a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// construct and print Max Sum IS of arr
		printMaxSumIS(a, n);
	}


	return 0;
}

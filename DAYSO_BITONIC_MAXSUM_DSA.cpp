#include <bits/stdc++.h>
using namespace std;
// max sum bitonic subsequence
int MaxSumBS(int a[], int n){
	int max_sum = INT_MIN;
	int MSI[n], MSD[n];// maxsumIncreasing, maxsumDecreasing
	for(int i = 0; i < n; i++){
		MSI[i] = a[i];
		MSD[i] = a[i];
	}
	// compute MSI from L to R
	for(int i = 1; i < n; i++){
		for(int j = 0; j < i; j++){
			if(a[i] > a[j] && MSI[i] < MSI[j] + a[i]){
				MSI[i] = MSI[j] + a[i];
			}
		}
	}
	// compute MSD from R to L
	for(int i = n-2; i >=0; i--){
		for(int j = n-1; j > i; j--){
			if(a[i] > a[j] && MSD[i] < MSD[j] + a[i]){
				MSD[i] = MSD[j] + a[i];
			}
		}
	}
	for(int i = 0; i < n; i++){
		max_sum = max(max_sum, MSI[i]+MSD[i]-a[i]);
	}
	return max_sum;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x: a) cin >> x;
		cout << MaxSumBS(a, n) << endl;
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
void findMinoperator(int a[100][100], int n){
	int sumRow[n], sumCol[n];
	memset(sumRow, 0, sizeof(sumRow));
	memset(sumCol, 0, sizeof(sumCol));
	//calculate sumRow, sumCol
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			sumRow[i] += a[i][j];
			sumCol[j] += a[i][j];
		}
	}
	//find maximum value in either row or col
	int maxSum = 0;
	for(int i = 0; i < n; i++){
		maxSum = max(maxSum, sumRow[i]);
		maxSum = max(maxSum, sumCol[i]);
	}
	int cnt = 0;
	for(int i = 0, j = 0; i < n && j < n; ){
		// find minimum increment required in either row or col
		int d = min(maxSum - sumRow[i], maxSum - sumCol[j]);
		//difference
		//add d in corresponding cell
		sumRow[i] += d;
		sumCol[j] += d;
		a[i][j] += d;
		cnt += d;
		//if any ith row, any jth col sastified, increment ith value for next iteration
		if(sumRow[i] == maxSum){
			i++;
		}
		if(sumCol[j] == maxSum){
			j++;
		}
	}
	// neu muon in matran
//	for(int i = 0; i < n; i++){
//		for(int j = 0; j < n; j++){
//			cout << a[i][j] <<" ";
//		}
//		cout << endl;
//	}
	cout << cnt << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[100][100];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		findMinoperator(a, n);
		cout << endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x : a){
			cin >> x;
		}
		// longest increasing subsequence
//a[]		10 22 9 33 21 50 41 60 80
//lis		1  2    3     4     5  6
		int lis[n];
		lis[0] = 1;
		for(int i = 1; i < n; i++){
			lis[i] = 1;
			for(int j = 0; j < i; j++){
				if(a[i] > a[j] && lis[i] < lis[j] + 1){
					lis[i] = lis[j] + 1;
				}
			}
		}
		cout << *max_element(lis, lis + n) << endl;
	}
}
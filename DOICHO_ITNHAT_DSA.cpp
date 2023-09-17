#include<bits/stdc++.h>
using namespace std;
void selection(int a[], int n){
	int ans = 0;
	for(int i = 0; i < n - 1; i++){
		int min_pos = i;
		int min = a[i];
		for(int j = i + 1; j < n; j++){
			if(a[j] < min){
				min = a[j]; 
				min_pos = j;
			}
		}
		if(a[i] > min){
			swap(a[min_pos], a[i]);
			ans++;
		}
	}
	cout << ans << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x: a) cin >> x;
		selection(a, n);
	}
}
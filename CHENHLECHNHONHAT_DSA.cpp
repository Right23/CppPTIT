#include<bits/stdc++.h>
using namespace std;
long min_distance(long a[], int n){
	sort(a, a + n);
	long dis = INT_MAX;
	for(int i = 0; i < n - 1; i++){
		dis = min(dis, a[i + 1] - a[i]);
	}
	return dis;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long a[n];
		for(long &x: a){
			cin >> x;
		}
		cout << min_distance(a, n) << endl;
	}
}
#include<bits/stdc++.h>
using namespace std;


int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int &x: a) cin >> x;
		sort(a,a + n);
		int pivot = min(k, n - k);
		cout << accumulate(a + pivot, a + n, 0) - accumulate(a, a + pivot, 0) << endl;
	}
}

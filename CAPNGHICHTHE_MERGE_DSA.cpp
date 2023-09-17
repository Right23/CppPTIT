#include<bits/stdc++.h>
#define ll long long
using namespace std;
///////////dem cap nghich the
ll merge(ll a[], int l, int m, int r) {
	vector <ll> x (a+l, a+m+1);
	vector <ll> y (a+m+1, a+r+1);
	int i=0, j=0;
	ll cnt=0;
	while(i<x.size() && j<y.size()) {
		if(x[i] <= y[j]) {
			a[l] = x[i];
			l++;
			i++;
		} else {
			cnt+= x.size() -i;
			a[l] = y[j];
			l++;
			j++;
		}
	}
	while(i < x.size()) {
		a[l] = x[i];
		l++;
		i++;
	}
	while(j < y.size()) {
		a[l] = y[j];
		l++;
		j++;
	}
	return cnt;
}
ll mergeSort(ll a[], int l, int r) {
	ll dem=0;
	if(l < r) {
		int m = (l+r)/2;
		dem+= mergeSort(a,l,m);
		dem+= mergeSort(a,m+1,r);
		dem+= merge(a,l,m,r);
	}
	return dem;
}

int main() {
	int t;
	cin>>t ;
	
	while(t--) {
		int n; cin >> n;
		long long a[n];
		for(long long &x: a) cin >> x;
		cout << mergeSort(a, 0, n) << endl;
	}
	return 0;
}
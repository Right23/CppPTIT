#include <bits/stdc++.h>
using namespace std ;
void huyinitwsolve() {
	int n,k ;
	long long count=0 ;
	cin>>n>>k ;
	int a[n] ;
	for(int i=0 ; i<n; i++) {
		cin>>a[i] ;
	}
	sort(a,a+n) ;
	for(int i=0 ; i<n-1; i++) {
		int id=upper_bound(a,a+n,a[i]+k-1)-a ;
		count += 1LL*(id-i-1) ;
	}
	cout<<count<<endl ;
}
int main() {
	int t ;
	cin>>t ;
	while(t--) {
		huyinitwsolve() ;
	}
	return 0 ;
}

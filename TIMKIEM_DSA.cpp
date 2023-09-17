#include<bits/stdc++.h>
using namespace std;

//linear search O(n)
//int ls(int a[],int n,int x) {
//	for(int i=0; i<n; i++) {
//		if(a[i]==x) {
//			return true;
//		}
//	}
//	return false;
//}
//bool bs(int a[],int n,int x) {
//	int l=0,r=n-1;
//	while(l<=r) {
//		int m=(l+r)/2;// m=l+(r-l)/2
//		if(a[m]==x) {
//			return true;
//		} else if(a[m]<x) {
//			l=m+1;
//		} else {
//			r=m-1;
//		}
//	}
//	return false;
//}


//
//bool binary_search(int a[],int l,int r,int x) {
//	if(l>r) {
//		return false;
//	}
//	int m=(l+r)/2;
//	if(a[m]==x) {
//		return true;
//	} else if(a[m]>x) {
//		return binary_search(a,l,m-1,x);
//	} else {
//		return binary_search(a,m+1,r,x);
//	}
//}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int x; cin >> x;
		int a[n];
		for(int &x: a){
			cin >> x;
		}
		if(binary_search(a, a + n, x)){
			cout << 1 << endl;
		}
		else cout << -1 << endl;
	}
}
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

//linear search O(n)
int ls(int a[],int n,int x) {
	for(int i=0; i<n; i++) {
		if(a[i]==x) {
			return true;
		}
	}
	return false;
}



bool bs(int a[],int n,int x) {
	int l=0,r=n-1;
	while(l<=r) {
		int m=(l+r)/2;// m=l+(r-l)/2
		if(a[m]==x) {
			return true;
		} else if(a[m]<x) {
			l=m+1;
		} else {
			r=m-1;
		}
	}
	return false;
}



bool binary_search(int a[],int l,int r,int x) {
	if(l>r) {
		return false;
	}
	int m=(l+r)/2;
	if(a[m]==x) {
		return true;
	} else if(a[m]>x) {
		return binary_search(a,l,m-1,x);
	} else {
		return binary_search(a,m+1,r,x);
	}
}
//dung luon binary_search(a,a+n,x) cung dc

int first_pos(int a[],int n,int x) {
	int res=-1;
	int l=0,r=n-1;
	while(l<=r) {
		int m=(l+r)/2;
		if(a[m]==x) {
			res=m;
			r=m-1;
		} else if(a[m]<x) {
			l=m+1;
		} else {
			r=m-1;
		}
	}
	return res;
}



int last_pos(int a[],int n,int x) {
	int res=-1;
	int l=0,r=n-1;
	while(l<=r) {
		int m=(l+r)/2;
		if(a[m]==x) {
			res=m;
			l=m+1;
		} else if(a[m]<x) {
			l=m+1;
		} else {
			r=m-1;
		}
	}
	return res;
}

int f1_posgreaterthanX(int a[],int n,int x) {
	int res=-1;
	int l=0,r=n-1;
	
	while(l<=r) {
		int m=(l+r)/2;
		if(a[m]<=x) {
			res=m+1;
			if(res==n){
				res=-1;
			}
			l=m+1;
		} else {
			res=m;
			r=m-1;
		}
	}
	return res;
}

int last2_poslessthanX(int a[],int n,int x){
	int res=-1;
	int l=0,r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]>=x){
			res=m-1;
			r=m-1;
		}else{
			res=m;
			l=m+1;
		}
	}
	return res;
}
int last1_poslessthanX(int a[],int n,int x){
	int res=-1;
	int l=0,r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]>=x){
			res=m-1;
			r=m-1;
		}
		else{
			res=0;
		}
	}return res;
}
int main() {
	int a[100];
	int n,x;
	cin>>n>>x;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	int l= last1_poslessthanX(a,n,x);
	cout<<l<<endl;
}

#include<bits/stdc++.h>
using namespace std; 

//o(n)
long long TK_TT(long long a[], long long n, long long x){
	for(long long i=0; i<n; i++){
		if(a[i]==x){
			return i; 
		} 
	}
	return -1; 
} 
//o(log(n))
long long Bin_search(long long a[], long long n, long long x){
	long long l=0, r=n-1;
	while(l<=r){
		long long m=(l+r)/2;
		if(a[m]>x){
			r=m-1;
		}else if(a[m]<x){
			l=m+1;	 
		}else{
			return m; 
		}
	}
	return -1; 
} 

//o(log(n))
long long Ternary_search(long long a[], long long n, long long x){
	long long l=0, h=n-1;
	long long m1=(l+h)/3, m2=(l+h)*2/3;
	while(l<=h){
		if(x<a[m1]){
			h=m1-1; 
		}else if(x=a[m1]){
			return m1; 
		}else if(a[m1]<x && x<a[m2]){
			l=m1+1;
			h=m2-1; 
		}else if(x==a[m2]){
			return m2;
		}else{
			l=m2+1;
		}
		m1=(l+h)/3;
		m2=(l+h)*2/3;
	} 
	return -1;
} 
//o(log(n)) xaunhat la o(n)
long long TK_NS(long long a[], long long n, long long x){
	long long l=0, h=n-1;
	if(x<a[l] || a[h]<x){
		return -1;
	}
	while(l<=h){
		long long p=l+(x-a[l])*(h-l)/(a[h]-a[l]);
		if(a[p]==x){
			return p;
		}else if(a[p]<x){
			l=p+1;
		}else{
			h=p-1;
		}
	}
	return -1;
}
//o(log(n)) xau nhatla o(canbac2(n))
long long TK_J(long long a[], long long n, long long x){
	long long s=(long long)sqrt(n);
	long long p=0;
	long long r=min(s,n)-1;
	while(a[r]<x){
		p=s;
		s+=(long long)sqrt(n);
		if(p>=n){
			return -1;
		}
		r=min(s,n)-1;
	}
	while(a[p]<x){
		p++;
		if(p==min(s,n)){
			return -1;
		}
	}
	if(a[p]==x){
		return p;
	}
	return -1;
}


void taomangxuoi(long long a[], long long n){
    for(long long i = 0; i < n; i++){
        a[i] = i;
    }
}
int main(){
	long long n=5000; 
	long long x = n*3/5; 
    long long a[n];
    taomangxuoi(a, n);
	clock_t Start= clock();
		Bin_search(a, n, x);
	clock_t End= clock();
	double t=(double)(End-Start)/CLOCKS_PER_SEC;
    printf("%.10f", t);	
}

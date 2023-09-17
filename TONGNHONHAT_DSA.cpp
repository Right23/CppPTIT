#include<bits/stdc++.h>
using namespace std;
//// tong nho nhat cua 2 so duoc tao tu cac so trong mang
void min_sum(int a[], int n){
	sort(a, a + n);
	long s1 = 0, s2 = 0;
	for(int i = 0; i < n; i++){
		if(i % 2 == 0){// vi tri le
			s1 *= 10;
			s1 += a[i];
		}else{  // vi tri chan
			s2 *= 10;
			s2 += a[i];
		}
	}
	cout << s1 + s2 << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x: a) cin >> x;
		min_sum(a, n);
	}
}

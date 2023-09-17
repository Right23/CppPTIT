#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;


bool find3Numbers(int A[], int arr_size, int sum)
{
	int l, r;
	
	sort(A, A + arr_size);
	
	for (int i = 0; i < arr_size - 2; i++) {

		
		l = i + 1; 
		r = arr_size - 1; 
		while (l < r) {
			if (A[i] + A[l] + A[r] == sum) {
				return true;
			}
			else if (A[i] + A[l] + A[r] < sum)
				l++;
			else 
				r--;
		}
	}
	return false;
}


int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		int k;
		cin >> n >> k;
		int a[n];

		for(int &x: a) {
			cin >> x;
		}

		
		if(find3Numbers(a, n, k)){
			cout <<"YES\n";
		}else cout <<"NO\n";
	}
}




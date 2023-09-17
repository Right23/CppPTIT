#include <bits/stdc++.h>
using namespace std;

//bool find3Numbers(int A[], int arr_size, int sum) {
//	for (int i = 0; i < arr_size - 2; i++) {
//		unordered_set<int> s;
//		int curr_sum = sum - A[i];
//		for (int j = i + 1; j < arr_size; j++) {
//			if (s.find(curr_sum - A[j]) != s.end()) {
//				return true;
//			}
//			s.insert(A[j]);
//		}
//	}
//	return false;
//}

bool find3Numbers(int a[], int n, int sum){
	for(int i = 0; i < n - 2; i++){
		set <int> se;
		int cur_sum = sum - a[i];
		for(int j = i + 1; j < n; j++){
			if(se.find(cur_sum - a[j]) != se.end()){
				return true;
			}
			se.insert(a[j]);
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


		if(find3Numbers(a, n, k)) {
			cout <<"YES\n";
		} else cout <<"NO\n";
	}
}
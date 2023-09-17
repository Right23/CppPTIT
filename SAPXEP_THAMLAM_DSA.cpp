#include<bits/stdc++.h>
using namespace std;
string solve(int a[], int n){
	vector<int> b;
	vector<int> c;
	for(int i = 0; i < n; i++){
		b.push_back(a[i]);
	}
	c = b;
	sort(b.begin(), b.end());
	for(int i = 0; i < b.size(); i++){
		if(b[i] != c[i] && b[i] != c[b.size() - 1 - i]){
			return "No";
		}
	}return "Yes";
}
//string solve(int a[], int n){
//	vector<int> b, c;
//	for(int i = 0; i < n; i++){
//		b.push_back(a[i]);
//	}
//	c = b;
//	sort(b.begin(), b.end());
//	for(int i = 0; i < n; i++){
//		if(b[i] != c[i] && b[i] != c[n-i-1]){
//			return "NO";
//		}
//	}return "YES";
//}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		cout << solve(a, n) << endl;
	}
}
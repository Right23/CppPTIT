#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		long long s1 = 0, s2 = -1e18;
		for(int i = 0; i < n; i++) {
			s1 = s1 + a[i];
			s2 = max(s1, s2);
			if(s1 < 0) s1 = 0;
		}
		cout << s2 << endl;
//		int start = 0, end = 0, s = 0;
//		for(int i = 0; i < n; i++){
//			s1 += a[i];
//			if(s1 < s2){
//				s1 = s2;
//				start = s;
//				end = i;
//			}
//			if(s1 < 0){
//				s1 = 0;
//				s = i + 1;	
//			}
//		}
//		for(int i = start; i < end; i++){
//			cout << a[i] <<" ";
//		}
	}
}
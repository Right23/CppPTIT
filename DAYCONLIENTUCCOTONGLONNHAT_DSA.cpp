#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x: a) cin >> x;
		long long s1 = 0, s2 = -1e18;
		for(int i = 0; i < n; i++){
			s1 += a[i];
			s2 = max(s1, s2);
			if(s1 < 0){
				s1 = 0;
			}
		}
		cout << s2 << endl;
	}
}
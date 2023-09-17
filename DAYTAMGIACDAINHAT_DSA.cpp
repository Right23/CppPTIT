#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>> t;
	while(t--){
		int n; cin >> n;
		int a[100005];
		for(int i = 0; i < n; i++) cin >> a[i];
		int inc[n], dec[n];
		inc[0] = 1;
		dec[n - 1] = 1;
		for(int i = 1; i < n; i++){
			if(a[i] > a[i - 1]) inc[i] = inc[i - 1] + 1;
			else inc[i] = 1;
		}
		for(int i = n - 2; i >= 0; i--){
			if(a[i] > a[i + 1]) dec[i] = dec[i + 1] + 1;
			else dec[i] = 1;
		}
		int max_len = -1;
		for(int i = 0; i < n; i++){
			max_len = max(max_len, inc[i] + dec[i] - 1);
		}
		cout << max_len << endl;
	}
}
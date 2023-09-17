#include <bits/stdc++.h>
using namespace std;
int c[100000] = {0};
bool cmp(int a, int b){
	if(c[a] != c[b]){
		return c[a] > c[b];
	}else return a < b;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			c[a[i]]++;
		}
		sort(a, a + n, cmp);
		for(int i = 0; i < n; i++){
			cout << a[i] <<" ";
		}
		memset(c, 0, 10000);
		cout << endl;
	}	
}

#include<bits/stdc++.h>
using namespace std;
void chiadu(int n, long int k){
	int s = 0;
	for(int i = 1; i <= n; i++){
		s += i % k;
	}
	cout << s << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n;long int k;
		cin >> n >> k;
		chiadu(n, k);
	}
}
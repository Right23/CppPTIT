#include<bits/stdc++.h>
using namespace std;
void chiadu(int n, long int k){
	int s = 0;
	long int K = k;
	for(int i = 1; i <= n; i++){
		s += i % k;
	}
	if(s == K){
		cout << "1"<< endl;
	}else cout << "0\n";
}
int main(){
	int t; cin >> t;
	while(t--){
		int n;long int k;
		cin >> n >> k;
		chiadu(n, k);
	}
}
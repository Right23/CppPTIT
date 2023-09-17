#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
	return a > b;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n]; 
		multiset<int> se;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		bool ck = false;
		if(se.count(k) != 0){
			cout << se.count(k) << endl;
		}
		else cout << "-1\n";
	}
}
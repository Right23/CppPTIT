#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n; 
		int a[n];
		map <int, int> mp;
		for(int &x: a){
			cin >> x; 
			mp[x]++;
		}
		int max = 1;
		for(auto it : mp){
			if(it.second > max){
				max = it.second;
			}
		}
		int ck = 0;
		for(auto it : mp){
			if(it.second == max && max > n/2){
				cout << it.first << endl;
				ck = 1;
				break;
			}
		}
		if(!ck){
			cout <<"NO\n";
		}
	}
}
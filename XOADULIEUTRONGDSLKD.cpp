#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	set <int> se;
	map <int, int> mp;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		se.insert(a[i]);
		mp[a[i]]++;
	}
//	for(int x : se){
//		cout << x <<" ";
//	}
	for(auto it : mp){
		cout << it.first <<" ";
	}
}
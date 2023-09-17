#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int k; cin >> k;
		string s; cin >> s;
		map<char, int> mp;
		for(char x: s) mp[x]++;
		priority_queue<int> p;// luu tan suat xuat hien
		for(auto it : mp){
			p.push(it.second);
		}
		while(k > 0){
			// lay ra tan suat lon nhat
			int top = p.top(); p.pop();
			top--; k--;
			p.push(max(top, 0));// de phong k > do dai xau thi se bi am
		}
		ll ans = 0;
		while(!p.empty()){
			ans += 1ll * p.top() * p.top();
			p.pop();
		}
		cout << ans << endl;
	}
}
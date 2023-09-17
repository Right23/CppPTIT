#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll remainder(string a, ll m){
	ll r = 0;
	for(char x : a){
		r = r * 10 + x - '0';
		r %= m;
	}
	return r;
}
//https://www.geeksforgeeks.org/find-the-smallest-binary-digit-multiple-of-given-number/?ref=gcse
string getminBDN(ll n){
	queue <string> q;
	set<int> se;
	string t = "";
	q.push("1");
	while(!q.empty()){
		t = q.front();
		q.pop();
		ll r = remainder(t, n);
		if(r == 0){
			return t;
		}else if(se.find(r) == se.end()){
			se.insert(r);
			q.push(t + "0");
			q.push(t + "1");
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		cout << getminBDN(n) << endl;
	}
}
#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
int countBNlessthan_n(ll n){
	queue<ll>q;
	q.push(1);
	int cnt = 0;
	ll t;
	while(!q.empty()){
		t = q.front();
		q.pop();
		if(t <= n){
			cnt++;
			q.push(t * 10);
			q.push(t * 10 + 1);
		}
	}
	return cnt;
}

int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		cout << countBNlessthan_n(n) << endl;
	}
}
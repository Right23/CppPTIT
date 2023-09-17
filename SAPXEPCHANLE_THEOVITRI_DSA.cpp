#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	ll a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	vector <ll> c, l;
	for(int i = 0; i < n; i++){
		if(i % 2 == 1){
			c.push_back(a[i]);
		}else{
			l.push_back(a[i]);
		}
	}
	sort(c.begin(), c.end() , greater<ll>());
	sort(l.begin(), l.end());
	for(int i = 0; i < c.size(); i++){
		cout << l[i] <<" "<< c[i] <<" ";
	}
	if(l.size() > c.size()){
		cout << l[l.size() - 1] << endl;
	}
}
		
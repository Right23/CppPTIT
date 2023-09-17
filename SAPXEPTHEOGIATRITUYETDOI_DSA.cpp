#include<bits/stdc++.h>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define FOR(i, a, b) for(int i = a; i < b; i++)
int x;
bool cmp1(int a, int b ) {
	if(abs(x - a) != abs(x - b)) {
		return abs(x - a) < abs(x - b);
	} else return a < b;
}
// dung stable_sort de tra ve theo vi tri neu abs ==
// hoac dung cmp2 theo pair
bool cmp2(pair<int, int> a, pair<int,int> b){
	if(abs(x - a.first) != abs(x - b.first)){
		return abs(x - a.first) < abs(x - b.first);
	}
	else return a.second < b.second;
}
int main() {
	faster();
	int t = 1;
	cin >> t;
	while(t--) {
		int n;
		cin >> n >> x;
		//// theo cmp1
//		int a[n];
//		FOR(i, 0, n){
//			cin >> a[i];
//		}
//		sort(a, a + n, cmp1);
//		FOR(i, 0, n){
//			cout << a[i] <<" ";
//		}
		///// theo cmp2
		pair <int, int> v[n];
		FOR(i, 0, n){
			cin >> v[i].first;
			v[i].second = i;// luu vi tri xuat hien
		}
		sort(v, v + n, cmp2);
		FOR(i, 0, n){
			cout << v[i].first <<" ";
		}
		cout << endl;
	}
}

#include<bits/stdc++.h>
using namespace std;

int x;
bool cmp(pair <int, int> a, pair <int, int> b){
	if(abs(a.first - x) == abs(b.first - x)){
		return a.second < b.second;
	}else return abs(a.first - x) < abs(b.first - x);
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n; cin >> n >> x;
		int a[n];
		pair <int, int> v[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			v[i].first = a[i];
			v[i].second = i;
		}
		sort(v, v + n, cmp);
		for(int i = 0; i < n; i++){
			cout << v[i].first << " ";
		}
		cout << endl;
	}
}
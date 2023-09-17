#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		set <int> se;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			if(a[i] > 0) {
				se.insert(a[i]);
			}
		}
		int tmp = 1;
		for(auto it : se) {
			if(tmp == it) {
				tmp++;
			} else {
				break;
			}
		}
		cout << tmp << endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		set <int> se;
		for(int &x: a){
			cin >> x;
			se.insert(x);
		}
		if(se.size() == 1){
			cout << -1;
		}else{
			int cnt = 1;
			for(auto it : se){
				cout << it <<" ";
				cnt++;
				if(cnt > 2) break;
			}
		}
		cout << endl;
	}
}
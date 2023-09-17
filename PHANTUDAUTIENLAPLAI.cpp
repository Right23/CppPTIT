#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		vector <int> v;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			v.push_back(a[i]);
		}
		set <int> se;
		// for(string x : v)
		for(int i = 0; i < v.size(); i++){
			if(se.find(v[i]) != se.end()){
				cout << v[i] << endl;break;
			}else se.insert(v[i]);
		}
		if(v.size() == se.size()) cout << "-1\n";
	}
}
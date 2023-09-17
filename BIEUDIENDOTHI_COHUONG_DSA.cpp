#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int v, e; cin >> v >> e;// nhap so dinh, canh
		vector <int> dske[v + 1];
		for(int i = 1; i <= e; i++){
			int x, y;
			cin >> x >> y;
			dske[x].push_back(y);
//			dske[y].push_back(x);
		}
		for(int i = 1; i <= v; i++){
			cout << i <<": ";
			for(int x: dske[i]){
				cout << x <<" ";
			}cout << endl;
		}
	}
}
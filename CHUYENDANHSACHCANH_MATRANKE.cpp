#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int v, e; cin >> v >> e;// nhap so dinh, canh
//		vector <int> dske[v + 1];
		int b[100][100];
//		vector <pair<int,int>> dsc;
		for(int i = 1; i <= e; i++){
			int x, y;
			cin >> x >> y;
//			dske[x].push_back(y);
//			dske[y].push_back(x);
			b[x][y] = 1;
			b[y][x] = 1;
//			dsc.push_back({x, y});
		}
//		for(pair<int,int> x: dsc){
//			cout << x.first <<" "<< x.second << endl;
//		}
//		for(int i = 1; i <= v; i++){
//			cout << i <<": ";
//			for(int x: dske[i]){
//				cout << x <<" ";
//			}cout << endl;
//		}
		for(int i = 1; i <= v; i++){
			for(int j = 1; j <= v; j++){
				cout << b[i][j] <<" ";
			}
			cout << endl;
		}
	}
}
#include<bits/stdc++.h>
using namespace std;
// chuyen tu ma tran ke-> ds ke, dscanh
int a[1001][1001];
int main() {
	int n; cin >> n;
	cin.ignore();
	vector <pair<int,int>> dscanh;
	for(int i = 1; i <= n; i++){
		string s, num;
		getline(cin, s);
		stringstream ss (s);
		while(ss >> num){
			if( i < stoi(num)){
				dscanh.push_back({i, stoi(num)});
			}
		}
	}
	for(pair<int,int> x: dscanh){
		cout << x.first <<" "<< x.second << endl;
	}
	
}
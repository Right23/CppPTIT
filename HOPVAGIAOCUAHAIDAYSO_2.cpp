#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int m, n;
		cin >> m >> n;
		int a[m], b[n];
		for(int &x : a){
			cin >> x;
		}
		for(int &x : b){
			cin >> x;
		}
		vector <int> hop, giao;
		int i = 0, j = 0;
		while(i < m && j < n){
			if(a[i] < b[j]){
				hop.push_back(a[i]);i++;
			}
			else if(a[i] >b[j]) {
				hop.push_back(b[j]);j++;
			}
			else {
				giao.push_back(a[i]);
				hop.push_back(a[i]);
				i++;j++;
			}
		}
		while(i < m){
			hop.push_back(a[i]);i++;
		}
		while(j < n){
			hop.push_back(b[j]);j++;
		}
		for(int i = 0; i < hop.size(); i++){
			cout << hop[i] << " ";
		}
		cout << endl;
		for(int j = 0; j < giao.size(); j++){
			cout << giao[j] << " ";
		}
		cout << endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
void solve(int a[], int n){
	vector<int> vt;
	for(int i = 0; i < n-1; i++){
		//int tmp = a[i];
		int next = -1;
		int ans = -1;
		for(int j = i+1; j < n; j++){
			if(a[j] > a[i]){
				next = j;
				break;
			}
		}
		if(next == -1){
			vt.push_back(-1);
		}
		else{
			for(int j = next+1; j < n; j++){
				if(a[j] < a[next]){
					ans = j;
					break;
				}
			}
			if(ans == -1){
				vt.push_back(-1);
			}
			else{
				vt.push_back(a[ans]);
			}
		}
	}
	vt.push_back(-1);// for last element
	for(auto x: vt){
		cout << x <<" ";
	}
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n]; 
		for(int &x: a) cin >> x;
		solve(a, n);
	}
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int add = 0;// step use operator +
		int max_multi = 0;// max step use operator *;
		for(int i = 0; i < n; i++){
			int cnt = 0; // step use operator *;
			while(a[i] > 0){
				if(a[i] % 2 == 0){
					a[i] /= 2;
					cnt++;
				}else{
					add++;
					a[i]--;
				}
			}
			max_multi = max(max_multi, cnt);
		}
		cout << add + max_multi << endl;
	}
}
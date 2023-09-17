#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int a, m;
		cin >> a >> m;
		bool ck = false;
		for(int i = 0; i <= m - 1; i++){
			if(a * i % m == 1){
				ck = true;
				cout << i << endl;
				break;
			}
		}
		if(!ck) cout << " -1" << endl;
	}
}

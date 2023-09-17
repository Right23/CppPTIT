#include<bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		long a[n];
		for(long &x: a){
			cin >> x;
		}
		int ck = 0;
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				if(a[i] == a[j]){
					cout << a[i] << endl;
					ck = 1;
					break;
				}
			}
			if(ck == 1) break;
		}
		if(!ck){
			cout <<"NO"<<endl;
		}
	}
}

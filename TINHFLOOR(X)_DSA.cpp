#include<iostream>
using namespace std ;
int main() {
	int T;
	cin>>T;
	while(T--) {
		long long x;
		int n; 
		cin >> n >> x;
		long long a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int res = -1;
		for(int i = 0; i < n; i++){
			if(a[i] <= x){
				res = i + 1;
			}
		}
		cout << res << endl;
	}
}


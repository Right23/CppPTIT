#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n; int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		if(n % 2 == 0){
			for(int i = 0, j = n / 2; i < n / 2, j < n; i++, j++){
				cout << a[i] <<" "<< a[j] <<" ";
			}
			
		}else{
			int z;
			for(int i = 0, j = n / 2 + 1; i <= n / 2, j < n; j++, i++){
				cout << a[i] <<" "<< a[j] <<" ";
				z = i + 1;
			}
			if(z <= n / 2) cout << a[z];
		}
		cout << endl;
	}
}

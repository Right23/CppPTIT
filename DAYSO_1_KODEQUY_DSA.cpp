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
		for(int i = 0; i < n; i++){
			cout <<"[";
			if(i == 0){
				for(int j = 0; j < n; j++){
					cout << a[j];
					if(j == n - 1){
						cout <<"";
					}else{
						cout <<" ";
					}
				}
				
			}else{
				for(int j = 0; j < n - i; j++){
					a[j] = a[j] + a[j + 1];
				}
				for(int j = 0; j < n - i; j++){
					cout << a[j];
					if(j == n - i - 1){
						cout <<"";
					}
					else cout <<" ";
				}
			}
			cout <<"]\n";
		}
	}
}
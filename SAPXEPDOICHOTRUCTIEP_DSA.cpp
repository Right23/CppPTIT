#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t; 
	int a[t]; 
	for(int &x: a) cin >> x;
	for(int i = 0; i < t - 1; i++){
		for(int j = i; j < t; j++){
			if(a[i] > a[j]){
				swap(a[i], a[j]);
			}
		}
		cout << "Buoc " << i + 1 << ": ";
		for(int i = 0; i < t; i++){
			cout << a[i] <<" ";
		}
		cout << endl;
	}
}
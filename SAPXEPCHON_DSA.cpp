#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t; 
	int a[t]; 
	for(int &x: a) cin >> x;
	for(int i = 0; i < t - 1; i++){
		int min = a[i];
		int min_pos = i;
		for(int j = i + 1; j < t; j++){
			if(a[j] < min){
				min = a[j];
				min_pos = j;
			}
		}
		swap(a[i], a[min_pos]);
		cout <<"Buoc "<< i + 1 <<": ";
		for(int i = 0; i < t; i++){
			cout << a[i] <<" ";
		}
		cout << endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
int n, k, a[1000], ok;
//void ktao(){
//	for(int i = 0; i < n; i++){
//		a[i] = i + 1;
//	}
//}
//
void sinh(){
	int i = n - 1;
	while(i >= 1 && a[i] > a[i + 1]){
		--i;
	}
	if(i == 0){
		ok = 0;// la cau hinh cuoi cung;
	}
	else{
		// di tim ptu > a[i] trong [i + 1, n]
		int j = n; 
		while(a[i] > a[j]){
			j--;
		}
		swap(a[i], a[j]);
		int l = i + 1, r = n;
		while(l < r){
			swap(a[l], a[r]);
			l++; r--;
		}
		// hoac dung reverse(a + i + 1, a + n + 1)
	}
}
// next_permutation(a, a + n)
//or prev_permutation(a, a + n)
/*
int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		a[i] = i + 1;
	}
	do{
		for(int i = 0; i < n; i++){
			cout << a[i];
		}
	}while(next_permutation(a, a + n)); neu ma la cau hinh cuoi cung roi se return false-> break;
	return 0;
}
*/
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		ok = 1;
		sinh();
		if(!ok){
			for(int i = 1; i <= n; i++){
				cout << i <<" ";
			}
		}
		else{
			for(int i = 1; i <= n; i++){
				cout << a[i] <<" ";
			}
		}		
		cout << endl;
	}return 0;
}
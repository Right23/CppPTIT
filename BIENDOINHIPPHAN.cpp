#include<bits/stdc++.h>
#include<string>
using namespace std;
void countingsort(int a[], int n){
	int cnt[3] = {0};
	for(int i = 0; i < n; i++){
		cnt[a[i]]++;
	}
	for(int i = 0; i <= *max_element(a, a + n); i++){
		for(int j = 0; j < cnt[a[i]]; j++){
			cout << i << " ";
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		countingsort(a, n);
		cout << endl;
	}
}
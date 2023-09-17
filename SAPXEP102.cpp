#include<bits/stdc++.h>
using namespace std;
void countingsort(int a[], int n){
	int cnt[3] = {0};
	for(int i = 0; i < n; i++){
		cnt[a[i]]++;
	}
	int p = *max_element(a, a + n);
	int q = *min_element(a, a + n);
	for(int i = q; i <= p; i++){
		if(cnt[i] != 0){
			for(int j = 0; j < cnt[i]; j++){
				cout << i << " ";
			}
		}
	}
	cout << endl;
}
int main() {
	int t;
	cin>> t;
	cin.ignore();
	while(t--) {
		int n; cin  >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		countingsort(a, n);
	}
}
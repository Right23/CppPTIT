#include<bits/stdc++.h>
//Finding ‘k’ such that its modulus with each array element is same
using namespace std;
void cntEqualModNumbers(int a[], int n){
	sort(a, a + n);
	int d = a[n - 1] - a[0];
	if(d == 0){
		cout << 0 << endl;
		return;
	}
	vector <int> v;
	for(int i = 1; i * i <= d; i++){
		if(d % i == 0){
			v.push_back(i);
			if(i != d / i){
				v.push_back(d / i);
			}
		}
	}
	// cnt count amount of numbers such that modulus k is equal
	int cnt = 0;
	//check for each v[i] if its modulus with each array element is same or not
	for(int i = 0; i < v.size(); i++){
		int tmp = a[0] % v[i];
		int j;
		for(j = 1; j < n; j++){
			if(a[j] % v[i] != tmp){
				break;
			}
		}
		if(j == n){
			cnt++;
		}
	}
	cout << cnt << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int &x : a){
			cin >> x;
		}
		cntEqualModNumbers(a, n);
	}
}
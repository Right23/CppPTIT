#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	float a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	float min = a[0], max = a[n - 1];
	int cnt = 0;
	float sum = 0;
	for(int i = 0; i < n; i++){
		if(a[i] != min && a[i] != max){
			sum += a[i];
			cnt++;
		}
	}
	cout << fixed << setprecision(2) << sum / cnt;
}
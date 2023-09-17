#include<bits/stdc++.h>
using namespace std;
int n, k, x[100];
void inkq() {
	for(int i = 1; i <= k; i++) {
		cout << x[i];
	}
	cout << endl;
}
//
int cnt = 0;// dem so cau hinh
int dem = 0;// dem so lan goi backtrack
void Try(int i) {
	dem++;
	// duyet cac kha nang ma x[i] co the nhan duoc
	// min = x[i - 1] + 1, max = n - k + i;
	for(int j = x[i - 1] + 1; j <= n - k + i; j++){
		x[i] = j;
		if(i == k){
			inkq();
			cnt++;
		}
		else{
			Try(i + 1);
		}
	}
}
int main(){
	cin >> n >> k;
	x[0] = 0;
	Try(1);
	cout << cnt << endl << dem;
	return 0;
}
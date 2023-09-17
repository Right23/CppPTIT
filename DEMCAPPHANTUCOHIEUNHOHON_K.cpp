//#include<bits/stdc++.h>
//using namespace std;
////
//int a[1000001];
//a[i] - a[j] < k;
//tim vi tri xuat hien dau tien cua phantu > x [l, r];
//int first_pos(int a[], int l, int r, int x){
//	int res = -1;
//	while(l <= r){
//		int m = (l + r) / 2;
//		if(a[m] > x){
//			res = m;
//			r = m - 1;
//		}
//		else{
//			l = m + 1;
//		}
//	}
//	return res;
//}
//int main(){
//	int t; cin >> t;
//	while(t--){
//		int n, k; cin >> n >> k;
//		for(int i = 0; i < n; i++){
//			cin >> a[i];
//		}
//		sort(a, a + n, greater<int>());
//		int ans = 0;
//		for(int i = 0; i < n; i++){
//			int l = first_pos(a, i + 1, n - 1, a[i] - k);
//			if(l != -1){
//				ans += n - l;
//			}
//		}
//		cout << ans << endl;
//	}
//} 
// 1 2 4 10
#include <bits/stdc++.h>
using namespace std ;
void solve(){
	int n, k; cin >> n >> k;
	long long cnt = 0;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	for(int i = 0; i < n - 1; i++){
		int id = upper_bound(a, a + n, a[i] + k - 1) - a;
		cnt += 1ll * (id - i - 1);
	}
	cout << cnt << endl;
}//1 2 4 10
int main() {
	int t ;
	cin>>t ;
	while(t--) {
		solve() ;
	}
	return 0 ;
}

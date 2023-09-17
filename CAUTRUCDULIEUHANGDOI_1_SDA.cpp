#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		queue <int> q;
		int k;
		cin >> k;// so truy van
		while(k--) {
			int kth; cin >> kth;
			if(kth == 1) {
				cout << q.size() << endl;
			} else if(kth == 2) {
				if(q.empty()) {
					cout <<"YES\n";
				} else cout <<"NO\n";
			} else if(kth == 3) {
				int n; cin >> n;
				q.push(n);
			}else if(kth == 4){
				if(!q.empty()){
					q.pop();
				}
			}else if(kth == 5){
				if(!q.empty()){
					cout << q.front() << endl;
				}else cout << -1 << endl;
			}else if(kth == 6){
				if(!q.empty()){
					cout << q.back() << endl;
				}else cout << -1 << endl;
			}
		}
	}
}
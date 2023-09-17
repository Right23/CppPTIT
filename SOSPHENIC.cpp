#include<bits/stdc++.h>
using namespace std;

int spheic(int x) {
	if(x != 8 && x <= 10) return 0;
	set <int> se;
	multiset <int> ms;
	for(int i = 2; i  * i <= x; i++) {
		while(x % i == 0) {
			x /= i;
			se.insert(i);
			ms.insert(i);
		}
	}
	if(x != 1){
		se.insert(x);
		ms.insert(x);
	}
	if(se.size() == 3 && se.size() == ms.size()) {
		return 1;
	} else return 0;
}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		int n;
		cin >> n;
		if(spheic(n)) {
			cout << 1 << endl;
		} else cout << 0 << endl;
	}
}
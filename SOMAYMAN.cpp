#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		long long x; cin >> x;
		int r1 = x % 10;
		x /= 10;
		int r2 = x % 10;
		if(r1 == 6 && r2 ==8){
			cout << '1' << endl;
		}
		else cout << '0' << endl;
	}
}
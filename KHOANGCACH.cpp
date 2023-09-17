#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		double x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		cout << fixed << setprecision(4) << d << endl;
	}
}
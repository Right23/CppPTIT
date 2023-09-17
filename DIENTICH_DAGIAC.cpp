#include<bits/stdc++.h>
using namespace std;
struct Point{
	int x, y;
	
	void in(){
		cin >> x >> y;
	}
};
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		Point a[n + 1];
		for(int i = 0; i < n; i++){
			a[i].in();
		}
		a[n].x = a[0].x;
		a[n].y = a[0].y;
		//
		double area = 0;
		for(int i = 0; i < n; i++){
			area += (a[i].x * a[i + 1].y) - (a[i + 1].x * a[i].y);
		}
		cout << fixed << setprecision(3) << abs(area / 2) << endl;
	}
}

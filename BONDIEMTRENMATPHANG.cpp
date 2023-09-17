#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void equation_plane(int x1, int y1, int z1, int x2, int y2, int z2, int x3, int y3, int z3, int x, int y, int z){
	int a1 = x2 - x1;
	int b1 = y2 - y1;
	int c1 = z2 - z1;
	int a2 = x3 - x1;
	int b2 = y3 - y1;
	int c2 = z3 - z1;
	int a = b1 * c2 - b2 * c1;
	int b = a2 * c1 - a1 * c2;
	int c = a1 * b2 - a2 * b1;
	int d = (-a * x1 - b * y1 - c * z1);
	//equation of plane is: a*x + b*y + c*z = 0
	//checking if the 4th point sastifies the above equation
	if(a*x + b*y + c*z + d == 0){
		cout << "YES\n";
	}else cout << "NO\n";
}
int main(){
	int t; cin >> t;
	while(t--){
		int x1, x2, x3, x4, y1, y2, y3, y4, z1, z2, z3, z4;
		cin >> x1>>y1>>z1>>x2>>y2>>z2>>x3>>y3>>z3>>x4>>y4>>z4;
		equation_plane(x1,y1,z1, x2,y2,z2, x3,y3,z3, x4,y4,z4);
		cout << endl;
	}
}
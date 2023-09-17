#include<bits/stdc++.h>
using namespace std;
long long factorial(int x){
	if( x == 0 || x == 1) return 1;
	else return  x * factorial(x - 1);
}
int main() {
	int n; cin >> n;
	long long s = 0;
	for(int i = 1; i <= n; i ++){
		s += factorial(i);
	}
	cout << s;
}
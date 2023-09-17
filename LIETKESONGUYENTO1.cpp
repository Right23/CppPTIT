#include<bits/stdc++.h>
using namespace std;

bool nt(int x) {
	if(x == 1 || x == 0) return false;
	for(int i = 2; i * i <= x; i++) {
		if(x % i == 0) return false;
		}
	return true;
}
int main() {
	int a, b;
	cin >> a >> b;
	if(a > b){
		swap(a,b);
	}
	for(int i = a + 1; i < b; i++) {
		if(nt(i)) {
			cout << i << " ";
		}
	}

}
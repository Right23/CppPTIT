#include<bits/stdc++.h>
using namespace std;
bool nt(int x){
	if(x < 2) return false;
	for(int i = 2; i * i <= x; i++){
		if(x % i == 0) return false;
	}return true;
}
void csnt(int x){
	for(int i = 2; i <= x; i++){
		if(nt(x - i) && nt(i)){
			cout << i << " " << x - i << endl;
			break;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		csnt(n);
	}
}
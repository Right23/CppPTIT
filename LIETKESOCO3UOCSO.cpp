#include<iostream>
#include<math.h>
using namespace std;
bool nt(int x){
	if(x < 2) return false;
	for(int i = 2; i * i <= x; i++){
		if( x % i == 0) return false;
	}return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i = 2; i * i <= n; i++){
			if(nt(i)){
				cout << i * i << " ";
			}
		}
		cout << endl;
	}
}
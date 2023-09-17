#include<bits/stdc++.h>
using namespace std;
int snt(int x){
	if(x < 2) return 0;
	for(int i = 2; i * i <= x; i++){
		if(x % i == 0) return false;
	}return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ck = 0;
		int a, b;
		for(int i = 2; i < n; i++){
			if(snt(i) && snt(n - i)){
				a = i;
				b = n - i;
				ck = 1;break;
			}
		}
		if(ck){
			cout << a <<" "<< b << endl;
		}else{
			cout <<-1<<endl;
		}
	}
}
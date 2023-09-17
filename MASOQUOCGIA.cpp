#include <bits/stdc++.h>
using namespace std;

bool cl(int x){
	int c = 0, l = 0;
	while(x > 0){
		if((x % 10) % 2 == 0) c++;
		if((x % 10) % 2 == 1) l++;
		x /= 10;
	}
	if(c == l) return true;
	return false;
}
int main(){
	int n; cin >> n;
	int cnt =0;
	for(int i = pow(10, n -1); i < pow(10, n); i++){
		if(cl(i)){
			cnt++;
			cout << i << " ";
		}
		if(cnt % 10 ==0) cout << endl;
		
	}
}

#include<bits/stdc++.h>
using namespace std;
void sobe(int m, int s){
	s--;
	vector<int> v(m);
	for(int i = m - 1; i > 0; i--){
		if(s > 9){
			v[i] = 9;
			s -= 9;
		}
		else{
			v[i] = s;
			s = 0;
		}
	}
	v[0] = s + 1;
	for(int x : v){
		cout << x;
	}
}
//
void solon(int m, int s){
	vector<int> v(m);
	for(int i = 0; i < m; i++){
		if(s > 9){
			v[i] = 9;
			s -= 9;
		}
		else{
			v[i] = s;
			s = 0;
		}
	}
	for(int x : v){
		cout << x;
	}
}
int main(){
	int m, s; cin >> m >> s;
	sobe(m, s);
	cout << " ";
	solon(m, s);
}
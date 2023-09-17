#include<bits/stdc++.h>
using namespace std ;

void solon(int s, int d){// s la tong d la so chu so
	if(s > 9 * d || (s == 0 && d > 1)){
		cout << "-1\n"; return;
	}
	vector <int> v(d);
	for(int i = 0; i < d; i++){
		if(s > 9){
			v[i] = 9;
			s -= 9;
		}else{
			v[i] = s;
			s = 0;
		}
	}
	for(auto x : v) cout << x;
	cout << endl;
}
void sobe(int s, int d){
	if(s > 9 * d || (s == 0 && d > 1)){
		cout << "-1\n"; return;
	}
	vector <int> v(d);
	s--;
	for(int i = d - 1; i > 0; i--){
		if(s > 9){
			v[i] = 9;
			s -= 9;
		}else{
			v[i] = s;
			s = 0;
		}
	}
	v[0] = s + 1;
	for(int x : v) cout << x;
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int s, d;
		cin >> s >> d;
		sobe(s, d);
	}
}

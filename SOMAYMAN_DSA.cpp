#include<iostream>
using namespace std ;
void min_lucky_num(int n){
	int ok = 0;
	for(int b = n/7; b >= 1; b--){
		int remain = n - 7*b;
		if(remain % 4 == 0){
			ok = 1;
			for(int i = 1; i <= remain / 4; i++){
				cout <<"4";
			}
			for(int i = 1; i <= b; i++){
				cout <<"7";
			}
			break;
		}
	}
	if(!ok){
		cout <<"-1\n";
	}
	cout << endl;
}
void max_lucky_num(int n){
	int ok = 0;
	for(int b = n/7; b >= 0; b--){
		int remain = n - 7*b;
		if(remain % 4 == 0){
			ok = 1;
			for(int i = 1; i <= b; i++){
				cout <<"7";
			}
			for(int i = 1; i <= remain/4; i++){
				cout <<"4";
			}
			break;
		}
	}
	if(!ok){
		cout <<"-1\n";
	}
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		min_lucky_num(n);
	}
}
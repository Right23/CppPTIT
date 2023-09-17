#include<bits/stdc++.h>
using namespace std;

char x[1005];
char c; // ki tu nhap vao
int n; // do dai xau ki tu
void Try(int i, char b){
	for(int j = b; j <= c; j++){
		x[i] = j;
		if(i == n){
			for(int k = 1; k <= n; k++){
				cout << x[k];
			}
			cout << endl;
		}else Try(i + 1, j);
	}
}
int main(){
	
		cin >> c >> n;
		Try(1, 'A');
	
}
//void t(int i, char b){
//	for(int j = b; j <= c; j++){
//		x[i] = j
//	}
//}
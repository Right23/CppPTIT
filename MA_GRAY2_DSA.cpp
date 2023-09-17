#include<bits/stdc++.h>
using namespace std;
void gray_to_bin(string gr){
	string bin;
	bin = gr[0];
	for(int i = 1; i < gr.size(); i++){
		if(bin[i - 1] != gr[i]){
			bin += "1";
		}else bin += "0";
	}
	cout << bin << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		string gr;
		cin >> gr;
		gray_to_bin(gr);
	}
}
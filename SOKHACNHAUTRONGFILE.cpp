#include<bits/stdc++.h>
using namespace std;
int c[100000] = {0};
int main() {
	ofstream fout;
	int num;
	ifstream fin;
//	fout.open("DATA.in");
//	while(fout){
//		cin >> num;
//		fout << num << endl;
//	}
//	fout.close();
	map <int, int> mp;
	fin.open("DATA.in");
	while(fin >> num) {
	
		if(num < 1000) c[num]++;
	}
	
//	for(auto it : mp) {
//		cout << it.first<<" "<<it.second - 1 << endl;
//	}
	for(int i = 0; i < 1000; i++){
		if(c[i] != 0){
			cout << i <<" "<< c[i] << endl;
		}
	}
	fin.close();
}
#include<bits/stdc++.h>
using namespace std;
int n, k, x[100];
string c[30];
void inkq() {
	for(int i = 1; i <= k; i++) {
		cout << c[x[i]];
		if(i < k) cout <<" ";
	}
	cout << endl;
}
//
//int cnt = 0;// dem so cau hinh
//int dem = 0;// dem so lan goi backtrack
void Try(int i) {
//	dem++;
	// duyet cac kha nang ma x[i] co the nhan duoc
	// min = x[i - 1] + 1, max = n - k + i;
	for(int j = x[i - 1] + 1; j <= n - k + i; j++){
		x[i] = j;
		if(i == k){
			inkq();
//			cnt++;
		}
		else{
			Try(i + 1);
		}
	}
}
int main(){
	int z;
	cin >> z >> k;// di tim n
	cin.ignore();
	string s; getline(cin, s);
	stringstream ss (s);
	string word;
	set <string> se;
	while(ss >> word){
		se.insert(word);
	}
	n = se.size();
	int i = 0;
	for(auto it : se){
		i++;
		c[i] = it;
	}
	x[0] = 0;
	Try(1);
//	cout << cnt << endl << dem;
	return 0;
}
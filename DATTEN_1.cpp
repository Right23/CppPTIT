#include<bits/stdc++.h>
using namespace std;
int n, k, a[100], ok;
void ktao() {
	for(int i = 1; i <= n; i++) {
		a[i] = i;
	}
}
//
void sinh() {
	int i = k;
	//n - k + i = max_value cua a[i]
	while(i >= 1 && a[i] == n - k + i) {
		i--;
	}
	if(i == 0) {
		ok = 0; // da la cau hinh cuoi cung
	} else {
		a[i]++;
		for(int j = i + 1; j <= k; j++) {
			a[j] = a[j - 1] + 1;
		}
	}
}
//

int main() {
	cin >> n >> k;
	cin.ignore();
	string s, word; 
	getline(cin, s);
	set <string> se;
	stringstream ss(s);
	while(ss >> word){
		se.insert(word);
	}
	int len = se.size();
	string str[len];
	int i = 1;
	for(auto it : se){
		str[i] = it;
		i++;
	}
	ok = 1;
	n = len;
	ktao();
	while(ok){
		for(int i = 1; i <= k; i++){
			cout << str[a[i]] <<" ";
		}
		cout << endl;
		sinh();
	}
}
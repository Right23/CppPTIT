#include<bits/stdc++.h>
using namespace std;
//// sinh ra 10000 so np dau tien
void init(int n) {
	vector<string> res;
	queue<string> q;
	q.push("1");
	res.push_back("1");
	while(res.size() < n) {
		//lay ra ptu o hang doi dau tien
		string top = q.front();
		q.pop();
		res.push_back(top + "0");
		if(res.size() < n){
		res.push_back(top + "1");
		}
		q.push(top + "0");
		q.push(top + "1");
	}
	for(auto it : res){
		cout << it <<" ";
	}
	cout << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		init(n);
	}
}
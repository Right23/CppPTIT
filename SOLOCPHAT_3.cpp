#include<bits/stdc++.h>
using namespace std;
//////////////////////////////SO LOC PHAT KHONG QUA N CHU SO
vector <string> res;
void init(){
	queue <string> q;
	q.push("6");
	q.push("8");
	res.push_back("6");
	res.push_back("8");
	while(1){
		// lay ptu dau tien
		string top = q.front();
		q.pop();
		if(top.length() == 15) break;
		res.push_back(top + "6");
		res.push_back(top + "8");
		q.push(top + "6");
		q.push(top + "8");
	}
}
int main(){
	int t; cin >> t;
	init();
	while(t--){
		int n; cin >> n;
		vector <string> tmp;
		int cnt = 0;
		for(auto x : res){
			if(x.length() > n){
				break;
			}
			else{
				tmp.push_back(x);
				cnt++;	
			}
		}
		reverse(tmp.begin(), tmp.end());
		cout << cnt << endl;
		for(auto x : tmp){
			cout << x << " ";
		}
//		reverse(res.begin(), res.end());
//		for(auto it : res){
//			if(it.length() <= n){
//				cout << it <<" ";
//			}
//		}
		cout << endl;
	}
}
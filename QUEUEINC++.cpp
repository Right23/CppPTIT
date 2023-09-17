#include<bits/stdc++.h>
using namespace std;
using ll = long long;
// FIFO
//empty()
//push
//pop
//size()
//front
//queue<data> q;
//q.push(1)
//cout << q.front();
//q.pop
//////////////////////////////////////////////N SO NP DAU TIEN
vector<string> res;
// sinh ra 10000 so np dau tien
void init(){
	queue<string> q;
	q.push("1");
	res.push_back("1");
	while(res.size() < 10000){
		//lay ra ptu o hang doi dau tien
		string top = q.front();
		q.pop();
		res.push_back(top + "0");
		res.push_back(top + "1");
		q.push(top + "0");
		q.push(top + "1");
	}
}
///////////////////////////BOI SO CHI CHUA 0 VA 9 CUA MOT SO NGUYEN
vector<ll> res;
ll ans[101];
void init(){
	queue<string> q;
	q.push("9");
	res.push_back(9);
	while(1){
		string top = q.front();
		q.pop();
		if(top.length() == 10) break;
		res.push_back(stoll(top + "0"));
		res.push_back(stoll(top + "9"));
		q.push(top + "0");
		q.push(top + "9");
	}
	for(int i = 1; i <= 100; i++){
		for(ll x : res){
			if(x % i == 0){
				ans[i] = x;
				break;
			}
		}
	}
}
int main(){
	int t; cin >> t;
	init();
	while(t--){
		int n; cin >> n;
		cout << ans[n] << endl;
	}
}
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
		for(auto x : res){
			if(x.length() > n){
				break;
			}
			else tmp.push_back(x);
		}
		reverse(tmp.begin(), tmp.end());
		for(auto x : tmp){
			cout << x << " ";
		}
		cout << endl;
	}
}
///////////////////// BIEN DOI S THANH T VOI CAC THAO TAC NHAN  VA TRU
int solve(int s, int t) {
	queue <pair<int, int>> q;
	set <int> se;
	q.push({s, 0});
	while(!q.empty()) {
		pair <int, int> top = q.front();
		q.pop();
		if(top.first == t) return top.second;
		if(top.first * 2 == t || top.first - 1 == t) return top.second + 1;
		if(se.find(top.first * 2) == se.end() && top.first < t) {
			q.push({top.first * 2, top.second + 1});
			se.insert(top.first * 2);
		}
		//
		if(se.find(top.first - 1) == se.end() && top.first > 1){
			q.push({top.first - 1, top.second + 1});
			se.insert(top.first - 1);
		}
	}
}
int main(){
	int t ; cin >> t;
	while(t--){
		int s, t; cin >> s >> t;
		cout << solve(s, t) << endl;
	}
}

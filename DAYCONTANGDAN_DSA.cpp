#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define sz size()
#define all(x) begin(x), end(x)
int n;
int a[30];
vector<string> v;
vector<int> tmp;
void load_from_tmp_to_v(){
	string s = "";
	for(int x: tmp){
		s += to_string(x) + " ";
	}
	v.pb(s);
}
void Try(int i){
	for(int j = i + 1; j <= n; j++){
		if(a[j] > a[i]){
			tmp.pb(a[j]);
			if(tmp.sz > 1) load_from_tmp_to_v();
			Try(j);
			tmp.pop_back();
		}
	}
}
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	Try(0);
	sort(all(v));
	for(string x: v) cout << x << endl;
	return 0;
}
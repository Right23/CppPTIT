#include<bits/stdc++.h>
using namespace std;
int n, m;
set<int> dske[1001];
int deg[1001];
void input(){
	cin >> n >> m;
	for(int i = 1; i <= m; i++){ 
		int x, y; cin >> x >> y;
		dske[x].insert(y);
		dske[y].insert(x);
		deg[x]++;
		deg[y]++;
	}
}
void Euler(int u){
	stack<int> st;
	vector <int> EC;
	st.push(u);
	while(!st.empty()){
		int x = st.top();
		if(dske[x].size() != 0){
			int y = *dske[x].begin();
			st.push(y);
			dske[x].erase(y);
			dske[y].erase(x);
		}
		else{
			st.pop();
			EC.push_back(x);
		}
	}
	reverse(EC.begin(), EC.end());
	reverse(begin(EC), end(EC));
	for(int x: EC) cout << x <<" ";
}
int main(){
	input();
	Euler(1);
}
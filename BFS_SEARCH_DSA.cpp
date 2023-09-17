#include<bits/stdc++.h>
using namespace std;
//10 11
//1 2
//1 3
//1 5
//1 10
//2 4
//3 6
//3 7
//3 9
//6 7
//5 8
//8 9
/////////// neu bo test thi phai clear dske
int n, m;
vector <int> dske[1001];
bool visited[1001];

void input(){
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		dske[x].push_back(y);
		// dthi co huong thi pushback 1 lan
		dske[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}
void bfs(int u){
	// khoi tao
	queue <int> q;
	q.push(u);
	visited[u] = true;
	// lap
	while(!q.empty()){
		int v = q.front();
		q.pop();
		cout << v <<" ";
		for(int x: dske[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
		}
	}
}
int main(){
	input();
	bfs(1);
}
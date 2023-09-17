#include<bits/stdc++.h>
using namespace std;
class Graph {
	int V;
	list <int> *adj;
	public:
			Graph(int V);
			void addEdge(int v, int w);
			void printGraph();
};
Graph::Graph(int V){
	this->V = V;
	adj = new list<int>[V];
}
void Graph::addEdge(int v, int w){
	adj[v].push_back(w);
	adj[w].push_back(v);
} 
void Graph::printGraph(){
	int v;
	list<int>::iterator i;
	for(v = 1; v < V; v++){
		cout <<"\n DS ke cua dinh "<<v<<"\n head ";
		for(int i = adj[v].begin(); i != adj[v].end();i++){
			cout <<"->"<<*i;
		}
		cout << endl;
	}
}
int main(){
	ifstream fp("dothi.in.txt");
	int n, m, dau, cuoi;
	fp>>n>>m;
	Graph fh(n+1);
	for(int i = 1; i <= m; i++){
		fp >> dau >> cuoi;
		gh.addEdge(dau, cuoi);
	}
	fp.close();
	gh.printGraph();
}
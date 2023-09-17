#include<bits/stdc++.h>
using namespace std;
// disjoint set union
//1 gan dai dien
int parent[1001];
int n;
///////1 k toi uu, ton thoi gian
void make_sett(){
	for(int i = 1; i <= n; i++){
		parent[i] = i;
	}
}
// 2 tim dai dien
int findd(v){
	if(v == parent[v]){
		return v;
	}
	return find(parent[v]);
}
// 3 hop lai
void unionn(a, b){
	a = find(a);
	b = find(b);
	if(a != b){
		parent[b] = a;
	}
}
////// toi uu hon
void make_set(){
	for(int i = 1; i <= n; i++){
		parent[i] = i;
		size[i] = 1;
	}
}
int find(v){
	if(v==parent[v]){
		return v;
	}
	return parent[v] = find(parent[v]);
}
void Union(a, b){
	a = find(a), b = find(b);
	if(a != b){
		if( size(a) < size(b)) swap(a, b);
		parent[b] = a;
		size(a) += size(b);
	}
}

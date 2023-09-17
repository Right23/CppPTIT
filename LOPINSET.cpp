#include<bits/stdc++.h>
using namespace std;
//void doc_file(ifstream& fin, int a[], int& n){
//	for(int i = 0; i < n; i++){
//		fin >> a[i];
//	}
//}
//void xuat(int a[], int n){
//	for(int i = 0; i < n; i++){
//		cout << a[i] <<" ";
//	}
//}
////tim giao
//void xuat_giao(int a[], int n, int b[], int m){
//	sort(a, a + n);
//	sort(b, b + m);
//	vector <int> v(m + n);
//	auto it = set_intersection(a, a + n, b, b + m, v.begin());
//	v.resize(it - v.begin());
////	for(int x : v){
////		cout << x <<" ";
////	}
//	for(int i = 0; i < v.size(); i++){
//		cout << v[i];
//		if(i < v.size() - 1){
//			cout << " ";
//		}
//	}
//}
int main() {
	int m, n, x;
	ifstream fin;
	fin.open("DATA.in");
//	int a[100];
//	int b[100];
	fin >> n >> m;
//	doc_file(fin, a, n);
//	doc_file(fin, b, m);
//	xuat_giao(a, n, b, m);
	set <int> s1, s2;
	for(int i = 0; i < n; i++){
		fin >> x;
		s1.insert(x);
	}
	for(int i = 0; i < m; i++){
		fin >> x;
		s2.insert(x);
	}
	map <int, int> mp;
	for(int x : s1) mp[x]++;
	for(int x : s2) mp[x]++;
	for(auto it : mp){
		if(it.second == 2){
			cout << it.first <<" ";
		}
	}
	fin.close();
}
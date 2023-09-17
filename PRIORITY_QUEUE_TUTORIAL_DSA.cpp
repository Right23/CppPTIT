#include<bits/stdc++.h>
using namespace std;
// priority_queue
//push
//size
//empty
//pop
//top
int main(){
	priority_queue<int> pq;// thu tu lon nhat o dau
	priority_queue<int, vector<int>, greater<int> >pq1;// thu tu nho nhat o dau
	pq.push(1);
	pq.push(2);
	pq.push(3);
	cout << pq.top() << endl;
	pq.pop();
	cout << pq.top();
}
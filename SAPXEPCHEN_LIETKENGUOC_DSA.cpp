#include <bits/stdc++.h>

using namespace std;

int n = 0;
string st[10001];

void push(string x) {
	st[n] = x;
	++n;
}

void pop() {
	if(n >= 1)
		--n;
}

string top() {
	return st[n - 1];
}

int size() {
	return n;
}
int main() {

	int n;
	cin >> n;
	int a[n];
	for(int &x : a) {
		cin >> x;
	}
//	for(int i = 0; i < n; i++) {
//		
//		sort(a, a + i + 1);
//		string s = "";
//		for(int j = 0; j < i + 1; j++) {
//			s = s  + to_string(a[j]);
//			if(j != n - 1) s += " ";
//		}
//
//		push(s);
//	}
	string s = to_string(a[0]);
	push(s);
	for(int i = 1; i < n; i++){
		int x = a[i], pos = i - 1;
		while(pos >= 0 && x < a[pos]){
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = x;
		s = "";
		for(int j = 0; j < i + 1; j++){
			s = s  + to_string(a[j]);
			if(j != n - 1) s += " ";
		}
		push(s);
	}
	for(int i = 0; i < n ; i++) {
		cout <<"Buoc "<< n - i - 1 <<": ";
		cout << top() <<endl;
		pop();
	}
	// do pop het ra roi nen k can memset
//	memset(st, 0, 10001);
}



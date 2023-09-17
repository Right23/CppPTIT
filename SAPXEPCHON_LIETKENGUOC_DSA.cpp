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
	for(int i = 0; i < n - 1; i++) {
		int min = a[i], min_pos = i;
		for(int j = i + 1; j < n; j++) {
			if(min > a[j]) {
				min = a[j];
				min_pos = j;
			}
		}
		swap(a[i], a[min_pos]);
		string s = "";
		for(int j = 0; j < n; j++) {
			s = s  + to_string(a[j]);
			if(j != n - 1) s += " ";
		}

		push(s);
	}
	for(int i = 0; i < n - 1; i++) {
		cout <<"Buoc "<< n - i - 1 <<": ";
		cout << top() <<endl;
		pop();
	}
	// do pop het ra roi nen k can memset
	memset(st, 0, 10001);
}



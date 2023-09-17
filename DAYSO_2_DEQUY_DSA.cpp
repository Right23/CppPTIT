#include<bits/stdc++.h>
using namespace std;

void Arr(int a[], int n){
	stack <string> st;
	if (n > 0) {
		string s = "";
		s += "[";
		for(int i = 0; i < n; i++){
			s += to_string(a[i]);
			if(i < n - 1){
				s += " ";
			}
		}
		s += "]";
		st.push(s);
		
		for (int i=0; i<n-1; i++)
			a[i]=a[i]+a[i+1];
		Arr(a,n-1);
	}
	while(!st.empty()){
		cout << st.top() <<" ";
		st.pop();
	}
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		Arr(a, n);
		cout << endl;
	}
}
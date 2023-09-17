#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n; 
		int a[n], b[n];
		for(int &x : a) cin >> x;
		stack <int> st;// luu index
		for(int i = 0; i < n; i++){
			if(st.empty()){
				st.push(i);
			}else{
				while(!st.empty() && a[st.top()] < a[i]){
					b[st.top()] = a[i];
					st.pop();
				}
				st.push(i);
			}
		}
		while(!st.empty()){
			b[st.top()] = -1;
			st.pop();
		}
		for(int x: b){
			cout << x <<" ";
		}
		cout << endl;
	}
}
st=3
b:
b0=5
b2=25
b1=25
b3=-1


#include<bits/stdc++.h>
using namespace std;

void printMin(string seq){
	string result;
	// create an empty stack
	stack <int> stk;
	// run n + 1 elements of seq
	for(int i = 0; i <= seq.length(); i++){
		stk.push(i + 1);
		if(i == seq.length() || seq[i] == 'I'){
			// run until stack is empty
			while(!stk.empty()){
				// add top element to result
				result += to_string(stk.top());
				// remove top element
				stk.pop();
			}
		}
	}
	cout << result << endl;
}

int main(){
	int t; cin >> t; 
	while(t--){
		string s; cin >> s;
		printMin(s);
	}
}
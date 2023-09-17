#include<bits/stdc++.h>
using namespace std;
int ck(string s) {
	if(s[s.size() - 1] == '?' || s[s.size() - 1] == '.' || s[s.size()-1] == '!') return 1;
	return 0;
}

int main(){
	string s, tmp = "";
	vector <string> v;
	while(cin >> s){
		if(tmp == ""){
			tmp = tmp + s;
		}
		else{
			tmp = tmp + " " + s;
		}
		if(ck(tmp)){
			tmp.erase(tmp.size() - 1, 1);
//			tmp.pop_back();
			tmp[0] = toupper(tmp[0]);
			for(int i = 1; i < tmp.size(); i++){
				tmp[i] = tolower(tmp[i]);
			}
			v.push_back(tmp);
			tmp = "";
		}
	}
	for(string x : v){
		cout << x << endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
long long sum = 0;
string s;
int main(){
	ifstream in; in.open("DATA.in");	
	while (getline(in,s)){
		for (int i=0; i<s.length(); i++){
			if ('0'<=s[i] && s[i]>=9){
				string tmp;
				while (isdigit(s[i])){
					tmp += s[i];
					i++;
				}
				if (tmp.size()>10 || tmp.size()==0) continue;
				long long x=0;
				for (int j=0; j<tmp.length(); j++){
					x = x*10 + tmp[j]-'0';
				}
				if (x<=INT_MAX){
					sum+=x;
				}
			}
		}
	}
	cout<<sum;
}
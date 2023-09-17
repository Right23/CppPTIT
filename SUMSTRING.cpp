#include <bits/stdc++.h>
using namespace std;
 
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
 
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

//
int num(char c){
	return c - '0';
}
//
string add(string a, string b){
	//add two big number
	if(sz(a) < sz(b)) swap(a, b);
	int len1 = sz(a), len2 = sz(b);
	string res ="";
	reverse(all(a)); reverse(all(b));
	b += string(len1-len2,'0');
	int carry = 0;
	for(int i = 0 ; i < len1 ; i++){
		int tmp = num(a[i]) + num(b[i]) + carry;
		res += (char)('0' + tmp % 10);
		carry = tmp / 10;
	}
	if(carry)
		res += (char)('0' + carry);
	reverse(all(res));
	return res;
}
//1234565792836
bool check(string s, int left, int len1, int len2){
	string s1 = s.substr(left, len1);
	string s2 = s.substr(left + len1, len2);
	string s3 = add(s1, s2);
	if(sz(s3) >sz(s) - sz(s1) - left - sz(s2)) return false;
	if(s.substr(left + len1 + len2, sz(s3)) == s3){
		if(left + len1 + len2 + sz(s3) == sz(s)) return true;
		return check(s, left + len1, len2, sz(s3));
	}
	return false;
}

void TC(){
	string s; cin >> s;
	bool ok = false;
	for(int i = 1; i< s.length(); i++){
		for(int j = 1 ; j < s.length() - i; j++){
			if(check(s, 0, i, j)){
				cout <<"Yes\n";
				return;
			}
		}
	}
	cout << "No\n";
}
int main(){
	//freopen("input.txt","r", stdin);
	//freopen("output.txt","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	while(t--){
		TC();
	}
}
#include<bits/stdc++.h>
using  namespace std;
#define ms(s, n) memset(s, n, sizeof(s))
#define all(a) a.begin(), a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for(int i = (a); i <(b); i++)
#define FORd(i, a, b) for(int i = (a); i >= (b); i--)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
#define end "\n"
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair <int, int> pi;
typedef vector <int> vi;
typedef vector <pi> vii;

const int MOD = (int) 1e9 + 7;
const int INF = (int) 1e9 + 7;
//inline ll gcd(ll a, ll b) {
//	ll r;
//	while(b) {
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	return a;
//}
//inline lcm(ll a, ll b) {
//	return a * b / gcd(a, b);
//}
int num(char c){
	return c - '0';
}
void solve(){
	int m, n; cin >> m >> n;
	string s; cin >> s;
	ll len = s.length();
	ll dp[len][n];
//	dp[i][j] : so xau con ket thuc tai chi so i chia cho n du j la bao nhieu
	ms(dp, 0);
	dp[0][num(s[0]) % n]++;
	FOR(i, 1, len){
		dp[i][num(s[i]) % n]++;
		FOR(j, 0, n){
			dp[i][j] += dp[i - 1][j];
			dp[i][(j*10 + num(s[i])) % n] += dp[i - 1][j];
		}
	}
	cout << dp[len - 1][0] << endl;
}
int main(){
	ios :: sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	while(t--){
		solve();
	}
}
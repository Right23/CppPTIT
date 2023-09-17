#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using li = long int;
string multiply(string num1, string num2) {
	int len1 = num1.size();
	int len2 = num2.size();
	if (len1 == 0 || len2 == 0)
		return "0";

	// will keep the result number in vector
	// in reverse order
	vector<int> result(len1 + len2, 0);

	// Below two indexes are used to find positions
	// in result.
	int i_n1 = 0;
	int i_n2 = 0;

	// Go from right to left in num1
	for (int i=len1-1; i>=0; i--) {
		int carry = 0;
		int n1 = num1[i] - '0';

		// To shift position to left after every
		// multiplication of a digit in num2
		i_n2 = 0;

		// Go from right to left in num2
		for (int j=len2-1; j>=0; j--) {
			// Take current digit of second number
			int n2 = num2[j] - '0';

			// Multiply with current digit of first number
			// and add result to previously stored result
			// at current position.
			int sum = n1*n2 + result[i_n1 + i_n2] + carry;

			// Carry for next iteration
			carry = sum/10;

			// Store result
			result[i_n1 + i_n2] = sum % 10;

			i_n2++;
		}

		// store carry in next cell
		if (carry > 0)
			result[i_n1 + i_n2] += carry;

		// To shift position to left after every
		// multiplication of a digit in num1.
		i_n1++;
	}

	// ignore '0's from the right
	int i = result.size() - 1;
	while (i>=0 && result[i] == 0)
		i--;

	// If all were '0's - means either both or
	// one of num1 or num2 were '0'
	if (i == -1)
		return "0";

	// generate the result string
	string s = "";

	while (i >= 0)
		s += std::to_string(result[i--]);

	return s;
}
///
ll gcd(ll a, ll b){
	if(b == 0) return a;
	else return gcd(b, a % b);
}
//
ll remainder(string a, ll m){
	ll r = 0;
	for(char x : a){
		r = r * 10 + (x - '0');
		r %= m;
	}
	return r;
}
/////
ll binpow(ll a, ll b, ll m){
	ll res = 1;
	while(b){
		if(b % 2 == 1){
			res *= a;
			res %= m;
		}
		a *= a;
		a %= m;
		b /= 2;
	}
	return res;
}
int main(){
	int t; cin >> t;
	ll m = 1e9 + 7;
	while(t--){
		int n; cin >> n;
		string a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		ll g = stoll(a[0]);
		string h = a[0];
		for(int i = 1; i < n; i++){
			h = multiply(h, a[i]);
			g = gcd(g, stoll(a[i]));
		}
//		cout << h <<" "<< g;
		ll r = remainder(h, m);
		
		cout << binpow(r, g, m) << endl;
	}
}
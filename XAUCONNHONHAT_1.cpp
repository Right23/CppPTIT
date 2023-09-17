//https://www.geeksforgeeks.org/find-the-smallest-window-in-a-string-containing-all-characters-of-another-string/

#include <bits/stdc++.h>
using namespace std;

//// Function
//string Minimum_Window(string s, string t) {
//
//	int m[256] = { 0 };
//
//	// Answer
//	int ans = INT_MAX; // length of ans
//	int start = 0; // starting index of ans
//	int count = 0;
//
//	// creating map
//	for (int i = 0; i < t.length(); i++) {
//		if (m[t[i]] == 0)
//			count++;
//		m[t[i]]++;
//	}
//
//	// References of Window
//	int i = 0;
//	int j = 0;
//
//	// Traversing the window
//	while (j < s.length()) {
//		// Calculations
//		m[s[j]]--;
//		if (m[s[j]] == 0)
//			count--;
//
//		// Condition matching
//		if (count == 0) {
//			while (count == 0) {
//				// Sorting ans
//				if (ans > j - i + 1) {
//					ans = min(ans, j - i + 1);
//					start = i;
//				}
//				// Sliding I
//				// Calculation for removing I
//
//				m[s[i]]++;
//				if (m[s[i]] > 0)
//					count++;
//
//				i++;
//			}
//		}
//		j++;
//	}
//
//	if (ans != INT_MAX)
//		return s.substr(start, ans);
//	else
//		return "-1";
//}
void solve(){
	string s1, s2; cin >> s1 >> s2;
	int dem1[256] = {0}, dem2[256] = {0};
	for(char x : s2){
		dem2[x]++;
	}
	int ans = INT_MAX, left = 0, cnt = 0, indx = -1;
	// cnt: xau s1 chua dc bao nhieu xau s2 roi
	//index: chi so dau tien cua xau con tim dc thoa man
	for(int i = 0; i < s1.length(); i++){
		dem1[s1[i]]++;
		if(dem1[s1[i]] <= dem2[s1[i]]) cnt++;
		if(cnt == s2.length()){
			while(dem1[s1[left]] > dem2[s1[left]] || dem2[s1[left]] == 0){
				if(dem1[s1[left]] > dem2[s1[left]]){
					dem1[s1[left]]--;
				}
				left++;
			}
			if(ans > i - left + 1){
				ans = i - left + 1;
				indx = left;
			}
		}
	}
	if(indx == -1){
		cout << "-1\n";
	}else{
		cout << s1.substr(indx, ans) << endl;
	}
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
//		string s, t;
//		cin >> s >> t;
//		cout << Minimum_Window(s, t) << endl;
		solve();
	}
	return 0;
}

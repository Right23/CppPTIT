#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
// Function to find minimum number of operation required
// so that array becomes meaningful
int minOperations(int arr[], int n)
{
    // Initializing vector of pair type which contains value
    // and index of arr
    vector<pair<int, int>> vect;
    for (int i = 0; i < n; i++) {
        vect.push_back(make_pair(arr[i], i));
    }
 
    // Sorting array num on the basis of value
    sort(vect.begin(), vect.end());
 
    // Initializing variables used to find maximum
    // length of increasing streak in index
    int res = 1;
    int streak = 1;
    int prev = vect[0].second;
    for (int i = 1; i < n; i++) {
        if (prev < vect[i].second) {
            res++;
 
            // Updating streak
            streak = max(streak, res);
        }
        else res = 1;
            
        prev = vect[i].second;
    }
 
    // Returning number of elements left except streak
    return n - streak;
}
 
// Driver Code
int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int count = minOperations(a, n);
    cout << count;
}
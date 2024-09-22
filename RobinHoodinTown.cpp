#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common data types
using ll = long long;
using ld = long double;
using vld = vector<long double>;

// Constants
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

// Shortcuts for common functions
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x.size())

// Looping shortcuts
#define FOR(i, a, b) for (int i = a; i < b; i++)

// Function to solve each test case
void solve() {
    ll n;
    cin >> n;
    
    vld a(n);
    ld total_sum = 0; // total sum of wealth
    
    // Read input and calculate the total sum
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
    }
    
    if (n == 1 || n == 2) {
        cout << -1 << "\n"; // Output -1 for cases where Robin Hood can't appear
        return;
    }
    
    // Sort the array to easily access the middle element
    sort(a.begin(), a.end());
    
    // Calculate the average wealth
    ld average = total_sum / n;
    
    // Find the middle element (0-based index)
    ll middle = (n - 1) / 2;
    
    // Check if half of the average is greater than the wealth at the middle index
    if ((average / 2.0) > a[middle]) {
        cout << 0 << "\n";  // No additional wealth is needed
    } else {
        // Calculate how much extra wealth x is needed
        ld required = (average / 2.0); // This is the threshold for being unhappy
        ld x = (required * n) - total_sum;  // Extra wealth needed
        cout << (ll)ceil(x) << "\n"; // Output the ceiling of x
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    // Loop over the test cases
    while (t--) {
        solve();
    }
    
    return 0;
}

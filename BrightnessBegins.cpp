#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common data types
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int, int>;
using pll = pair<long long, long long>;

// Function f(n) = n - floor(sqrt(n))
long long f(long long n) {
    return n - (long long)sqrtl(n);
}

void solve() {
    ll k;
    cin >> k;
    
    ll l = 1, r = 2e9*2e9; // Start with large r
    
    while (l < r) {
        long long mid = l + (r - l) / 2;
        
        long long val = f(mid);
        
        if (val == k) {
            r = mid; // Try to minimize the result
        } else if (val < k) {
            l = mid + 1; // Search in the upper half
        } else {
            r = mid; // Search in the lower half
        }
    }

    // Output the smallest n
    cout << l << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

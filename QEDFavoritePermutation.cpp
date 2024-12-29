#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common data types
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int, int>;
using pll = pair<long long, long long>;

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

// Shortcuts for common functions
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x.size())

// Looping shortcuts
#define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, n) FOR(i, 0, n)

// Function to check if the array can be sorted based on the direction string
bool isvalid(ll a[], ll n, string s) {
    // Create a copy of the original array
    ll sorted[n];
    for (ll i = 0; i < n; i++) {
        sorted[i] = a[i];
    }

    // Sort the copy
    sort(sorted, sorted + n);

    // Process swaps based on the direction string
    for (ll i = 1; i < n; i++) {  // Start from i=1 to avoid out of bounds
        if (s[i] == 'L') {
            // Swap current element with the previous element
            swap(a[i], a[i - 1]);
        }
    }

    // Check if the modified array matches the sorted array
    for (ll i = 0; i < n; i++) {
        if (a[i] != sorted[i]) {
            return false;  // The array is not sorted
        }
    }
    return true;  // The array is sorted
}

void solve() {
    ll n, q;

    cin >> n >> q;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    string s;
    cin >> s;
    

    while (q--) {
        string q =s;
        ll i;
        cin >> i;
        i--;  // Convert 1-based index to 0-based
        
        // Toggle the direction at index i
        if (q[i] == 'L') {
            q[i] = 'R';
        } else {
            q[i] = 'L';
        }

        // Check if the array can be sorted with the current string
        if (isvalid(a, n, q)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
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

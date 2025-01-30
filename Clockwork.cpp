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
#define r(i, n) for (ll i = 0; i < n; i++)

// Debugging shortcuts (optional, can be removed)
#define DEBUG(x) cerr << #x << " = " << (x) << endl

// void solve() {
//     ll n;
//     cin >> n;

//     ll flag = 0;

//     f(i, 0, n) {
//         ll x;
//         cin >> x; 

//         // Check the condition
//         if (x <= 2 * (n - i - 1) || x <= 2 * i) {
//             flag = 1;
//             break;
//         }
//     }

//     if(flag) cout << "NO" << "\n"; // Output result based on `flag`
//     else cout << "YES" << "\n"; // Output result based on `flag`
//     // Output result based on `flag`
// }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        ll n;
    cin >> n;

    int flag = 0;

    f(i, 0, n) {
        ll x;
        cin >> x; 

        // Check the condition
        if (x <= 2 * (n - i - 1) || x <= 2 * i) {
            flag = 1;
            
        }
    }

    if(flag) cout << "NO" << "\n"; // Output result based on `flag`
    else cout << "YES" << "\n"; // Output result based on `flag`
    // Output result based on `flag`
    }
    return 0;
}

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

void solve() {
    ll n;
    cin >> n;
    ll arr[n+1] = {0};  // Number of edges connected to node i
    ll w[n+1] = {0};    // Weight for comparison

    ll match = ((n * (n - 1)) / 2) - 1;  // This is the total number of pairs minus 1

    // Read input for the connections (edges)
    f(i, 0, match) { 
        ll x, a;
        cin >> x >> a;
        arr[x]++;
        arr[a]++;
        w[x]++;
    }

    bool flag1 = false;
    ll p1, p2;
    
    // Find the two nodes that don't have `match + 1` edges
    match = n- 1;
    f(i, 1, n+1) {
        if (arr[i]<  match && !flag1) {
            p1 = i;
            flag1 = true;
            continue;
        }
        if (arr[i] < match  && flag1) {
            p2 = i;
            break;
        }
    }

    // Compare the weights of the two nodes and print in the required order
    if (w[p1] > w[p2]) {
        cout << p1 << " " << p2 << "\n";
    } else {
        cout << p2 << " " << p1 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}

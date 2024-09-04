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
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define REP(i, n) FOR(i, 0, n)

// Debugging shortcuts (optional, can be removed)
#define DEBUG(x) cerr << #x << " = " << (x) << endl

ll solve(vll &arr, ll size, ll a, ll b) {
    sort(arr.begin(), arr.end());
    ll diff = arr[size - 1] - arr[0];

    if (diff == 0 || (diff < b && diff < a)) {
        return diff;
    
    }
    else if (diff % a == 0 || diff % b == 0 || diff % (a + b) == 0) {
        return 0;
    }
    else if (diff > a) {
        arr[0] += a;
        return solve(arr, size, a, b);
    }
    else if (diff > b) {
        arr[0] += b;
        return solve(arr, size, a, b);
    }
    else if (diff > diff - b) {
        arr[0] += b;
        return solve(arr, size, a, b);
    }
    else if (diff > diff - a) {
        arr[0] += a;
        return solve(arr, size, a, b);
    }
    else {
        return diff;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        ll size, a, b;
        cin >> size >> a >> b;
        if (a > b) {
            swap(a, b);
        }
        
        vll arr(size);
        for (ll i = 0; i < size; i++) {
            cin >> arr[i];
        }
        
        ll result = solve(arr, size, a, b);
        cout << result << "\n";
    }
    
   


    return 0;
}

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
    ll n, a, b;
    cin >> n >> a >> b;
    ll c = gcd(a, b);

    vll arr;
    ll x;
    f(i, 0, n){
        cin >> x;
        x = x % c;
        arr.pb(x);
    }
    sort(all(arr));

    ll ans = arr[n-1] - arr[0];

    for(ll i = 1; i < n; i++){
        ans = min(ans, arr[i-1] - arr[i] + c);
    }

    cout << ans << "\n";
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
//finally understood the solution and tutorial for this problem
// 2 videos : 1 on solution and 1 on bezoout's theorem.
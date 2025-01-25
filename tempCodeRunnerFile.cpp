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
    ll a[n+10][2] = {0};
    
    cin >> n;
    f(i, 0, n){
        ll x, y;
        cin >> x >> y;
        a[x][y] = 1;
    }

    ll ans = 0;
    f(i, 0, n+1){
       if(a[i][0] && a[i][1]){
           ans= ans + n -2;
       }
       if(a[i][0]&&a[i+2][0]&&a[i+1][1])ans++;
       if(a[i][1]&&a[i+2][1]&&a[i+1][0])ans++;


    }
    // cout << ans << "\n";

    // f(i, 1, n){
    //     if(a[i+1][0] && a[i][1] && a[i-1][0]){
    //         ans++;
    //     }
        
    //     if(a[i][0] && a[i-1][1] && a[i+1][1]){
    //         ans++;
    //     }
    // }

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
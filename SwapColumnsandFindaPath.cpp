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

// Debugging shortcuts (optional, can be removed)
#define DEBUG(x) cerr << #x << " = " << (x) << endl

void solve() {
    ll n;
    ll sum=0 ;
    ll  extra= -10000000;

    cin >> n;
    ll arr[2][n];

    for(ll i=0;i<n;i++){
        cin >> arr[0][i];
    }
    for(ll i=0;i<n;i++){
        cin >> arr[1][i];
        sum =sum + max(arr[0][i],arr[1][i]);
        extra = max(extra,min(arr[0][i],arr[1][i]));

        
    }
    cout<<sum+extra<<"\n";
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
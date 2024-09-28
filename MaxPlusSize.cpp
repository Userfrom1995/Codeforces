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

ll solve(ll start,ll n,vector<ll> a){ {
   ll l = 0;
   ll c =0;
   for(ll i=start;i<n;i=i+2){
       if(a[i]>l){
           l = a[i];
       }
         c++;
   }
    return c+l;
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll even = solve(0,n,a);
    ll odd = solve(1,n,a);
    cout << max(even,odd) << endl;

    
    }
    return 0;
}
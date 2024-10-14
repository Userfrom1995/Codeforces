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
    cin >> n;
    ll a[n];
    f(i, 0, n) {
        cin >> a[i];
    }
    sort(a, a + n);
    ll cur =0;
    if(a[n-1]-a[0]<=5) {
        std::cout << n << "\n";
        return;
    }
    ll j =0;
    
    for(ll i=0;i<n; i++) {
    
         while(a[j]-a[i]<=5&&j<n) {
             cur=max(cur,j-i+1);
             j++;
         }
     
    }
    std::cout << cur << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    
    
        solve();
    
    return 0;
}
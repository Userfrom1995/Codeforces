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
ll distance (ll x,ll y,ll x1, ll y1){
    return 1ll * (x-x1)*(x-x1) + 1ll * (y-y1)*(y-y1);
}

void solve() {
   ll n;
   cin>>n;
   ll a[n];
   ll b[n];
    f(i,0,n){
         cin>>a[i];
         cin>>b[i];
    }
    ll xs,ys,xt,yt;
    cin>>xs>>ys>>xt>>yt;
    ll dis = distance(xs,ys,xt,yt);

    for(ll i =0;i<n;i++){
      if(distance(xt,yt,a[i],b[i])<=dis){
          cout<<"NO"<<"\n";
          return;
      }

    
    }

    cout<<"YES"<<"\n";
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
   // Somedays I am so dumb to even understand the 1200 rated questions . Took 2 hours to understand the tutorial.
   // Lost rating in last contest again.
}
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
    ll f,r;
    cin >> f >> r;
    ll ans = 0;
    ll a[f];
    ll total =0 ;
    for(ll i = 0; i < f; i++) {
        cin >> a[i];
        total += a[i];
    }
    ll full_rows = 0;  
    ll people_remaining = 0;  
        
       
     for (ll i = 0; i < f; ++i) {
            full_rows += a[i] / 2;  
            people_remaining += a[i] % 2; 
        }

        if(full_rows == r){
          cout<<total<<"\n";
        }
        else{
           if(r-full_rows>people_remaining){
               cout<<total<<"\n";
           }
           else{
               cout<<2*full_rows+2*(r-full_rows)-people_remaining<<"\n";
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
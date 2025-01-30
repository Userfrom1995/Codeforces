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

   ll a[n]={0};
   ll b[n]={0};

    f(i, 0, n) {
         cin >> a[i];

    }
    ll sum = accumulate(a, a + n, 0);
    f(i,0,n-1) {
        ll sum1=0;
        
       
        sum1=a[n-1]-a[i];


        
        
        for(ll j = i+1; j < n; j++) {
            
            b[j]=a[j]-a[j-1];



           
        }
        copy(b, b + n, a);
        
        sum1 = abs (sum1);
        sum = max(sum, sum1 );
        
        
    }

    cout << sum << "\n";

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
#include <bits/stdc++.h>
#include <numeric>
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

void solve() {
    // Write your main logic here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        ll k;
        
        ll ans = 0;
        cin >> n >> k;
        vll a(n);
        for (ll i = 0; i < n; i++) {
            ll s;
            cin >> s;
            a.push_back(s);
        }
        sort(a.begin(), a.end());
        ll sum = accumulate(a.begin(), a.end(), 0);
        ll divide = 0;
        divide = n/2;
        ll sum1 = accumulate(a.begin(), a.begin() + divide, 0);
        ll remain = sum - sum1;

        if(remain-sum1>k){
            ans = remain-sum1-k;
        }
        else if(remain-sum1<=k){
            ans = 0;
        }

        cout<<ans<<"\n";
        

       

    }
    return 0;
}
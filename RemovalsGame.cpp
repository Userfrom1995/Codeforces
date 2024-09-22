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

void solve() {
    // Write your main logic here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vll s1;
        vll s2;
        for(ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            s1.pb(x);
        }
        for(ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            s2.pb(x);
        }
        if(s1 == s2) {

            cout << "Bob" << endl;
                  continue;        
        } 
        reverse(s1.begin(), s1.end());
        if(s1 == s2) {
            cout << "Bob" << endl;
            continue;
        } 
        
        
            cout << "Alice" << endl;
        

    }
    return 0;
}
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

bool check7(ll n){
    while(n>0){
        if(n%10==7){
            return true;
        }
        n/=10;
    }
    return false;
}

void solve() {
    ll n;
    cin >> n;
    // if(check7(n)){
    //     cout << 0 << endl;
    //     return;
    // }
    // for(ll i =0;i<9;i++){
    //     n = n+9;
    //     if(check7(n)){
    //         cout << i+1 << endl;
    //         return;
    //     }

    // }
    ll temp;

    for(ll i = 0; i <= 9; i++){
       temp = n - i;
       string s = to_string(temp);
       int diff =0;
       for(char c : s){
        if(c <= '7'){
           diff = max(diff, c - '0');
        }

           
       }
         if( i>=7-diff){
              cout << i << endl;
              return;

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
// This one was hell of a problem.
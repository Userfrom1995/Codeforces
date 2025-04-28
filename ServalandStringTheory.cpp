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

bool allCharactersSame(const string& s) {
    return all_of(s.begin(), s.end(), [&](char c) { return c == s[0]; });
}

void solve() {
    ll size, op;
    string s;
    cin >> size >> op >> s;
    string reverse_s = s;
    reverse(reverse_s.begin(), reverse_s.end());
   
    if(op==0){
        if(s<reverse_s){
            cout <<"YES" << "\n";
        }
        else{
            cout <<"NO" << "\n";
        }
        return;
    }

    if (allCharactersSame(s)) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return;

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
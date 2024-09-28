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

 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    unordered_map<string, bool> substringsMap;
    string s;
    cin>>s;
    ll n = s.size();
    for (int len = n - 1; len > 0; len--) {
        for (int i = 0; i + len <= n; i++) { 
            string currentSubstr = s.substr(i, len);
            
           
            if (substringsMap.find(currentSubstr) != substringsMap.end()) {
               
                cout << currentSubstr.length() << '\n';
                return 0; 
            }
            
            substringsMap[currentSubstr] = true;
        }
    }
    cout << 0 <<"\n";

    return 0;
}
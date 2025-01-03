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
#define DEBUG(x) cerr << #x << " = " << (x) << "\n"

void solve() {
    ll n;
    cin >> n;
    ll a[n];
    ll b[n];
    f(i, 0, n) {
        cin >> a[i];
    }
    f(i, 0, n) {
        cin >> b[i];
    }
    ll m;
    cin >> m;
    ll d[m];
    f(i, 0, m) {
        cin >> d[i];
    }
    map<ll, ll> B;
    map<ll, ll> D;
    f(i, 0, m) {
        D[d[i]]++;
    }
    f(i, 0, n) {
        B[b[i]]++;
    }
    
    f(i, 0, n) {
        if (b[i]!=a[i]) {
            if(D[b[i]]>0) {
                D[b[i]]--;
               
            } else {
                cout << "NO" << "\n";
                return;
            }
            
        }
         
           
        
    }
    if(B[d[m-1]]>0){
        cout << "YES" << "\n";
        return;}

        else{
                 cout<<"NO"<<"\n";
                 return;
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
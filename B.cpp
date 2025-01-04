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
    ll d;
    cin>>n;
    cin>>d;
    map<ll,ll> s;
    f(i,0,n){
        ll x;
        cin>>x;
       s[x]++;
    }
    ll ans = s.size();

    vector<pair<ll, ll>> sorted_pairs(s.begin(), s.end()); 
sort(sorted_pairs.begin(), sorted_pairs.end(), [](const pair<ll, ll>& a, const pair<ll, ll>& b) {
    return a.second < b.second; 
});


for (auto& [key, value] : sorted_pairs) {
    if (d < value || ans==1) {
        break;
    } else {
        d -= value;
        ans--;
    }
}
cout<<ans<<"\n";





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
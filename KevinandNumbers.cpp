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
    priority_queue<ll> a,b;
    ll n;
    ll m;
    cin >> n;
    cin>>m;
    while(n--){
        ll x;
        cin >> x;
        a.push(x);
    }
    while(m--){
        ll x;
        cin >> x;
        b.push(x);
    }
    while(a.size() && b.size()){
        if(a.top()>b.top()||a.size()<b.size()){
            cout << "No" << "\n";
            return;
        }
        if(a.top()==b.top()){
            a.pop();
            b.pop();
            continue;
        }
       ll x=b.top();
         b.pop();
         b.push(x>>1),b.push((x+1)>>1);
       
        
    }
    if(a.empty()&&b.empty()){
        cout << "Yes" << "\n";
    }else{
        cout << "No" << "\n";
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
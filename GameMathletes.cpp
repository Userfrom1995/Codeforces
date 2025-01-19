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
    ll n ,k;
    cin>> n>>k;
    vll arr;
    f(i,0,n){
        ll x;
        cin>>x;
        arr.pb(x);
    }
    unordered_map<ll, ll> freq; 
    f(i,0,n){
        freq[arr[i]]++;
    }
    ll pairs =0;
    f(i,0,n){
        ll com = k-arr[i];
        if(freq[com]>0&&freq[arr[i]]>0){
            if(com==arr[i]&&freq[com]<2){
               continue;
            }
            pairs++;
            freq[com]--;
            freq[arr[i]]--;



                
        }
    }
    cout<<pairs<<endl;


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
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
  ll n,m,k;
  cin >> n >> m >> k;
  
  ll a[n];
  f(i,0,n) a[i]=i+1;
  ll b[m];
  f(i,0,m) cin>>b[i];
    ll c[n-1]={0};
    f(i,0,k) cin>>c[i];

    if(n-k>1){
        f(i,0,m){
         cout<<0;
        }
         cout<<"\n";
         return;
       }

    if(n==k){
        f(i,0,m){
            cout<<1;
        }
        cout<<"\n";
        return;
    }
    ll np =0;
    f(i,0,n-1){
        if(c[i]!=i+1){
            np =i+1;
            break;
        }
        
    }
    if(np==0){
        np = n;
    }

    

    f(i,0,m){
        if(b[i]==np){
            cout<<1;
        }else{
            cout<<0;
        }
    }
    cout<<"\n";
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
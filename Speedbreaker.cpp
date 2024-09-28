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
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll smallest =0;
    ll index=0;
    ll ri=0;
    ll li=0;
    ll count =0;
    for(ll i = 0; i < n; i++) {
        if (a[i] < smallest) {
            smallest = a[i];
            index = i;
            count =1;
            li = i-1;
            ri = i+1;

        }
    }
    while(true){
        if(ri>=n&&count<=a[li]){
            li--;
            count++;
        }
       else if(li<0&&count<=a[ri]){
           count++;
           ri++;
       }
       else if(a[li]<a[ri]&&count<=a[li]){
               count++;
             
           li--;
       }
         else if(a[ri]<a[li]&&count<=a[ri]){
              count++;
              ri++;
         }
            else{
                break;
            }
         
    }
    if(count == n){
        cout << index << endl;
    }
    else{
        cout << 0 << endl;
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
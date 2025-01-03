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
   cin>>n;
   string a;
   string b;
 
   cin>>a>>b;
   string A,B;
    A=a;
    B=b;


  
   ll c;
   cin>>c;
   map<ll,ll> m;
       map<ll,ll> n_map;
   for(ll i=0;i+2<=n-1;i=i+1){
    if(a[i]=='0'&&a[i+2]=='0'){
        if(b[i+1]=='0'){
            b[i+1]='1';
            n_map[i+1]=1; 
        }

    }
}

    for(ll i=0;i+2<=n-1;i=i+1){
        if(b[i]=='1'&&b[i+2]=='1'){
           if(a[i+1]=='0'){
               a[i+1]='1';
               m[i+1]=1; 
           }

        }
   }



   while(c--){
   
    
    ll s,e;
    cin>>s>>e;
    s--;
    e--;
   
   
    // cout<<b<<"\n";

   
    // cout<<a<<"\n";
   ll ans =0;

//    for(ll i=s;i<=e;i=i+1){
//        if(a[i]=='1'){
//            ans++;
//        }
//    }
   
//    for(ll i=s;i<=e;i=i+1){
//     if(m[i]==1&i-1<s){
//        ans--;
        
//     }
//     else if(m[i]==1&i+1>e){
//         ans--;
//     }
    
// }

if(e-s<3){
    for(ll i = s; i <= e; i++) {
        if(A[i] == '1') {
            // Don't count if it's at boundary and becomes_one
            
            ans++;
        }
    }
    cout<<ans<<"\n";
    
}
else{
for(ll i = s; i <= e; i++) {
    if(a[i] == '1') {
        // Don't count if it's at boundary and becomes_one
        
        ans++;
    }
}

if(m[s]==1){
    ans--;
}
if(n_map[s]==1){
    ans--;
}
if(n_map[e]==1){
    ans--;
}
if(m[e]==1){
    ans--;
}
    


    cout<<ans<<"\n";

      


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
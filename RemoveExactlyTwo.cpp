#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common data types
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int, int>;
using pll = pair<long long, long long>;


const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x.size())


#define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, n) FOR(i, 0, n)


#define DEBUG(x) cerr << #x << " = " << (x) << endl

void solve() {
   ll n;
    cin >> n;
    vector<vector<ll>> graph(n+1);
    vector<ll> degree(n+1, 0);
    f(i, 0, n-1) {
        ll u, v;
        cin >> u >> v;
        graph[u].pb(v);
        graph[v].pb(u);
        degree[u]++;
        degree[v]++;
    }
    ll ans = 0;
    
    ll fans =0;
    ll maxdegree = 0;
    f(i, 1, n+1) {
        maxdegree = max(maxdegree, degree[i]);
    }
    vll maxdegree_nodes;
    f(i, 1, n+1) {
        if (degree[i] == maxdegree) {
            maxdegree_nodes.pb(i);
            if(maxdegree_nodes.size()>=2){
                break;
            }
           
          
        }
    }
    for(ll j = 0; j < maxdegree_nodes.size(); j++) {
         ll node = maxdegree_nodes[j];
        for(auto i:graph[node]){
            degree[i]--;
        }
       ll ans1 = 0;

        for(ll i = 1; i <= n; i++){
            if(i!=node){
                ans1 = degree[node]+degree[i]-1;
            }
            ans = max(ans,ans1);

        }

        for(auto i:graph[node]){
            degree[i]++;
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
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
// #define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, n) FOR(i, 0, n)

// Debugging shortcuts (optional, can be removed)
#define DEBUG(x) cerr << #x << " = " << (x) << endl
const int MAX = 200000;
 
vector<int> sievePrimes(int n) {
    vector<bool> isPrime(n+1,true);
    isPrime[0] = isPrime[1] = false;
    for (int i=2; i*i<=n; i++){
        if(isPrime[i]){
            for (int j=i*i; j<=n; j+=i)
                isPrime[j] = false;
        }
    }
    vector<int> primes;
    for (int i=2; i<=n; i++){
        if(isPrime[i]) primes.push_back(i);
    }
    return primes;
}
 

void solve() {
    int n; 
    cin >> n;
    
    vector<int> f(n+1, 0);
    for (int i=0; i<n; i++){
        int x; 
        cin >> x;
        f[x]++;
    }
     
    long long ans = 0;
    vector<int> primes = sievePrimes(n);

    for( int p : primes){
        if((ll) p*p > n) break;

        ans += (ll) f[p] * f[p*p] 
        + (ll) f[p*p] * (f[p*p] + 1) / 2;
   

    }
    ll m = primes.size();
    for (ll i = 0; i < m; i++) {
        ll p = primes[i];
        if (p > n) break;
    
       
        int pos = upper_bound(primes.begin() + i + 1, primes.end(), n / p) - primes.begin();
    
        
        for (ll j = i + 1; j < pos; j++) {
            ll q = primes[j];
            ll prod = p * q;  
            ans += (ll) f[p] * f[q]       
                 + (ll) f[p] * f[prod]   
                 + (ll) f[q] * f[prod]     
                 + (ll) f[prod] * (f[prod] + 1) / 2; 
        }
    
        
        for (ll j = pos; j < m; j++) {
            ll q = primes[j];
            if (q > n) break;
            ans += (ll) f[p] * f[q];  
        }
    }
    







cout << ans << "\n";
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
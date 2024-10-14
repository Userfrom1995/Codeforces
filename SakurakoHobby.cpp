#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common data types
using ll = long long;
using vll = vector<long long>;

// Constants
#define pb push_back

void solve() {
    ll n;
    cin >> n;
    
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        a[i]--;  
    }
    
    string s;
    cin >> s;
    
    vector<bool> visited(n, false);
    vll count(n, 0);
    
    for (ll i = 0; i < n; i++) {
        if (visited[i]) continue;  
        
        vector<ll> cycle;
        ll j = i;
        
       
        while (!visited[j]) {
            visited[j] = true;
            cycle.pb(j);
            j = a[j];  
        }
        
       
        ll occur = 0;
        for (ll idx : cycle) {
            if (s[idx] == '0') {
                occur++;
            }
        }
         
        for (ll idx : cycle) {
            count[idx] = occur;
        }
        
        
        cycle.clear();
    }
    
    
    for (ll i = 0; i < n; i++) {
        cout << count[i] << " ";
    }
    cout << "\n";
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

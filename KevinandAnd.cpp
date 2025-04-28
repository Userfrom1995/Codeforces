#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;
    
    vll a(n), b(m);
    for (ll &x : a) cin >> x;
    for (ll &x : b) cin >> x;
    
    
    sort(a.rbegin(), a.rend());
    
    
    while (k--) {
        ll global_max_diff = 0;
        int best_index = -1;     
        ll best_new_val = 0;     
        
       
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ll new_val = a[i] & b[j];
                ll diff = a[i] - new_val;
                
                if (diff >= global_max_diff) {
                    global_max_diff = diff;
                    best_index = i;
                    best_new_val = new_val;
                }
            }
        }
        
        
        if (global_max_diff == 0) break;
        
        
        a[best_index] = best_new_val;
    }
    
    ll total = 0;
    for (ll x : a) {
        total += x;
    }
    cout << total << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

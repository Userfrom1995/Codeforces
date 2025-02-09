#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, m, k;
    cin >> n >> m >> k; 
    
    ll majority = max(n, m), minority = min(n, m);
    
    
    if (k < abs(n - m) || k > majority) {
        cout << "-1\n";
        return;
    }
    
    string s;
   
    if (k == majority) {
        if (n >= m) {
            s.append(n, '0');
            s.append(m, '1');
        } else {
            s.append(m, '1');
            s.append(n, '0');
        }
        cout << s << "\n";
        return;
    }
    
    if (n >= m) { 
        
        s.append(k, '0');
        n -= k;
        
        if (m > 0) {
            s.push_back('1');
            m--;
        }
        
        while (n > 0 || m > 0) {
            if (n > 0) {
                s.push_back('0');
                n--;
            }
            if (m > 0) {
                s.push_back('1');
                m--;
            }
        }
    } else {
        
        s.append(k, '1');
        m -= k;
        
        if (n > 0) {
            s.push_back('0');
            n--;
        }
        while (n > 0 || m > 0) {
            if (m > 0) {
                s.push_back('1');
                m--;
            }
            if (n > 0) {
                s.push_back('0');
                n--;
            }
        }
    }
    
    
    cout << s << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

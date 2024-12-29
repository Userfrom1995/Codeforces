#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


ll compute_lucky_value(ll n, ll k) {
    ll sum = 0;
    
    stack<pair<ll, ll>> segments;
    segments.emplace(1, n);
    
    while (!segments.empty()) {
        pair<ll, ll> current = segments.top();
        segments.pop();
        ll l = current.first;
        ll r = current.second;
        ll length = r - l + 1;
        
        if (length < k) continue;
        
        ll m = (l + r) / 2;
        
        if (length % 2 == 1) {
            
            if (m - 1 >= l) {
                segments.emplace(l, m - 1);
            }
            if (m + 1 <= r) {
                segments.emplace(m + 1, r);
            }
        } else {
           
            segments.emplace(l, m);
            segments.emplace(m + 1, r);
        }
    }
    
    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        cout << compute_lucky_value(n, k) << "\n";
    }
    
    return 0;
}
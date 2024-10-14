#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

ll query(vector<ll> &prefix, ll index ,ll n) {
    ll ans=index/n*prefix[n];
    ll start=index/n;
    ans+=prefix[start+index%n]-prefix[start];
    return ans;
}

void solve() {
   ll n,q;
    cin >> n >> q;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    a.insert(a.end(),a.begin(), a.end());
    vector<ll> prefix(2*n+1,0);
    for (ll i = 0; i < 2*n; i++) {
        prefix[i+1] = prefix[i] + a[i];
    }
    while(q--){
        ll l,r;
        cin >> l >> r;
        l --;
    
    cout << query(prefix, r, n) - query(prefix, l, n) << "\n";
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
    // work please! Three methods six unsuccessful attempts and finally understood the tutorial code , after going through other people solutions you know it was a tough one I say much more than 1700
    return 0;
}

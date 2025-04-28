#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vll = vector<long long>;

void solve() {
    ll n;
    cin >> n;
    
    vector<ll> a(n);
    vll freq(n + 1, 0);
    

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    vll len(n + 1, 0);
    

    for (int i = 0; i < n; i++)
        if (freq[a[i]] == 1)
            len[i+1] = len[i] + 1;



    ll maxFreq = *max_element(len.begin(), len.end());

    if(maxFreq == 0){
        cout << "0\n";
        return;
    }

    for(ll i = 1; i < n+1; i++)
        if (len[i] == maxFreq) {
            cout << i - len[i]+1 << " " << i << "\n";
            return;
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

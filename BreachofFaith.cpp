#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vll = vector<long long>;

void solve() {
    ll n;
    cin >> n;
    vll b(2 * n);
    ll total_sum = 0;

    for (ll i = 0; i < 2 * n; i++) {
        cin >> b[i];
        total_sum += b[i];
    }

    sort(b.begin(), b.end());

    // Try to find the missing element
    for (ll i = 0; i < 2 * n; i++) {
        ll a1 = total_sum - 2 * b[i];
        if (binary_search(b.begin(), b.end(), a1) && a1 != b[i]) {
            cout << a1 << " ";
            for (ll j = 0; j < 2 * n; j++) {
                if (j != i) cout << b[j] << " ";
            }
            cout << "\n";
            return;
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

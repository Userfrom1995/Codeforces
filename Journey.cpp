#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n, a, b, c;
    cin >> n>> a >> b >> c;

    ll sum = a + b + c;
    ll d = (n / sum) * 3;
    ll r = n % sum;

    if (r == 0) {
        cout << d << "\n";
        return;
    }
    else if (r <= a) {
        cout << d + 1 << "\n";
        return;
    }
     else if (r <= a + b) {
        cout << d + 2 << "\n";
        return;
    }
     else{cout << d + 3 << "\n";
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

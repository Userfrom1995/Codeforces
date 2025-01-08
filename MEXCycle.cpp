#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void printVector(const vector<ll>& vec) {
    for (ll val : vec) {
        cout << val << " ";
    }
    cout << "\n";
}

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    x--, y--; // Convert to 0-based indexing

    vector<ll> ans(n, 0);
    for (ll i = 0; i < n; i++) {
        ans[(x + i) % n] = i % 2;
    }
   

    // if (n % 2 == 0) {
    //     if ((y - x) % 2 != 0) {
    //         printVector(ans);
    //     } else {
    //         ans[y] = 2;
    //         printVector(ans);
    //     }
    // } else {
    //     if ((y - x) % 2 != 0) {
    //         ans[(x + n - 1) % n] = 2;
    //         printVector(ans);
    //     } else {
    //         ans[y] = 2;
    //         for (ll i = 1; i <= n-y; i++) {
    //             ans[(y+i) % n] = (i-1)% 2;
    //         }
    //         printVector(ans);
    //     }
    // }

    if (n % 2 || (x - y) % 2 == 0)
            ans[x] = 2;

   printVector(ans);
 

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
//It was brutal, so simply yet soo confusion.
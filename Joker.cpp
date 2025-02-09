#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n, m, q;
    cin >> n >> m >> q;

    vector<ll> a(q);
    for (int i = 0; i < q; ++i) {
        cin >> a[i];
    }

    ll L = m, R = m;
    bool has_1 = false, has_n = false;

    for (ll x : a) {
        ll new_L = L, new_R = R;
        bool new_has_1 = has_1;
        bool new_has_n = has_n;

        // Process the interval [L, R]
        if (L <= R) {
            if (x >= L && x <= R) {
                // Split occurs, add 1 and n
                new_has_1 = true;
                new_has_n = true;
                new_L = L + 1;
                new_R = R - 1;
                if (new_L > new_R) {
                    new_L = 1;
                    new_R = 0; // empty interval
                }
            } else {
                if (x < L) {
                    new_L = L - 1;
                    new_R = R - 1;
                } else {
                    new_L = L + 1;
                    new_R = R + 1;
                }
                // Clamp to [1, n] after move
                new_L = max(1LL, min(new_L, n));
                new_R = max(1LL, min(new_R, n));
                if (new_L > new_R) {
                    new_L = 1;
                    new_R = 0;
                }
            }
        }

        // Process has_1
        if (has_1) {
            if (x == 1) {
                new_has_1 = true;
                new_has_n = true;
            } else {
                // 1 moves to 2
                ll pos = 2;
                if (new_L <= pos && pos <= new_R) {
                    new_has_1 = false;
                } else {
                    if (new_L > new_R) {
                        new_L = pos;
                        new_R = pos;
                    } else {
                        if (pos == new_L - 1) {
                            new_L = pos;
                        } else if (pos == new_R + 1) {
                            new_R = pos;
                        } else {
                            new_L = pos;
                            new_R = pos;
                        }
                    }
                    new_has_1 = false;
                }
            }
        }

        // Process has_n
        if (has_n) {
            if (x == n) {
                new_has_1 = true;
                new_has_n = true;
            } else {
                // n moves to n-1
                ll pos = n - 1;
                if (new_L <= pos && pos <= new_R) {
                    new_has_n = false;
                } else {
                    if (new_L > new_R) {
                        new_L = pos;
                        new_R = pos;
                    } else {
                        if (pos == new_L - 1) {
                            new_L = pos;
                        } else if (pos == new_R + 1) {
                            new_R = pos;
                        } else {
                            new_L = pos;
                            new_R = pos;
                        }
                    }
                    new_has_n = false;
                }
            }
        }

        // Update
        L = new_L;
        R = new_R;
        has_1 = new_has_1;
        has_n = new_has_n;

        // Clamp L and R to valid range
        L = max(1LL, min(L, n));
        R = max(1LL, min(R, n));
        if (L > R) {
            L = 1;
            R = 0;
        }

        // Calculate size
        ll size = 0;
        if (L <= R) {
            size += R - L + 1;
        }
        if (has_1) {
            // Check if 1 is not in the interval
            if (L > 1 || R < 1) {
                size += 1;
            }
        }
        if (has_n) {
            // Check if n is not in the interval
            if (L > n || R < n) {
                size += 1;
            }
        }

        cout << size << " ";
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
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n;
        string s, t;
        cin >> n >> s >> t;

        auto get_range = [&] (int i) -> pair<int, int> {
            if (s[i] == '1') return {i, i}; // Single contribution
            int l = -1, r = -1;

            // Check left
            if (i > 0 && t[i - 1] == '1') l = i - 1;
            else if (i > 1 && t[i - 1] == '0' && s[i - 2] == '0') l = i - 2;

            // Check right
            if (i + 1 < n && t[i + 1] == '1') r = i + 1;
            else if (i + 2 < n && t[i + 1] == '0' && s[i + 2] == '0') r = i + 2;

            // Invalidate if no valid left or right bound
            if (l == -1 || r == -1) return {-1, -1};
            return {l, r};
        };

        // Prefix sum for valid ranges
        vector<int> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            auto [l, r] = get_range(i);
            pref[i + 1] = pref[i] + (l != -1);
        }

        int q;
        cin >> q;
        while (q--) {
            int l, r;
            cin >> l >> r;
            l--, r--; // Convert to 0-based indexing

            int ans = 0;
            if (r - l + 1 <= 5) {
                // Direct check for small ranges
                for (int i = l; i <= r; i++) {
                    auto [ll, rr] = get_range(i);
                    if (ll >= l && rr <= r) ans++;
                }
            } else {
                // Use prefix sum for large ranges
                ans = pref[r + 1] - pref[l];
                for (int j : {l, l + 1, r - 1, r}) {
                    if (j >= 0 && j < n) {
                        auto [ll, rr] = get_range(j);
                        if (ll != -1 && (ll < l || rr > r)) ans--;
                    }
                }
            }

            cout << ans << '\n';
        }
    }

    return 0;
} // copied tutorial copied after 10 attempts . TLE ,TLE,TLE :(

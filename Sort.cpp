#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll n, c;
        cin >> n >> c;
        string a, b;
        cin >> a >> b;

        // Prefix frequency arrays for both strings a and b
        vector<vector<ll>> prefixA(n + 1, vector<ll>(26, 0)), prefixB(n + 1, vector<ll>(26, 0));

        // Fill prefix frequency arrays
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < 26; j++) {
                prefixA[i + 1][j] = prefixA[i][j];
                prefixB[i + 1][j] = prefixB[i][j];
            }
            prefixA[i + 1][a[i] - 'a']++;
            prefixB[i + 1][b[i] - 'a']++;
        }

        // Process each query
        while (c--) {
            ll start, end;
            cin >> start >> end;
            start--; end--;  // Convert to 0-based indexing

            ll diffCount = 0;

            // Compare frequency counts for both strings in the range [start, end]
            for (ll i = 0; i < 26; i++) {
                ll freqInA = prefixA[end + 1][i] - prefixA[start][i];
                ll freqInB = prefixB[end + 1][i] - prefixB[start][i];
                diffCount += abs(freqInA - freqInB);
            }

            // Output the result for this query
            cout << diffCount / 2 << "\n"; // Divide by 2 to get the minimal swap cost
        }
    }

    return 0;
}

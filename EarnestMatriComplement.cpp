#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<vector<int>> matrix(n, vector<int>(m));
        vector<vector<int>> freq(n, vector<int>(k + 1, 0));

        // Input and calculate frequency of each number in every row
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix[i][j];
                if (matrix[i][j] != -1) {
                    freq[i][matrix[i][j]]++;
                }
            }
            
        }

        // Fill unfilled cells row by row
        for (int i = 0; i < n; ++i) {
            int max_val = 1;
            for (int u = 1; u <= k; ++u) {
                if (freq[i][u] > freq[i][max_val]) {
                    max_val = u;
                }
            }
            for (int j = 0; j < m; ++j) {
                if (matrix[i][j] == -1) {
                    matrix[i][j] = max_val;
                    freq[i][max_val]++;
                }
            }
        }

        // Calculate maximum beauty
        long long beauty = 0;
        for (int i = 0; i < n - 1; ++i) {
            for (int u = 1; u <= k; ++u) {
                beauty += 1LL * freq[i][u] * freq[i + 1][u];
            }
        }

        cout << beauty << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

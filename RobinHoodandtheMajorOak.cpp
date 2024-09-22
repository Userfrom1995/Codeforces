#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        ll start = n - k + 1;
        ll end = n;

        // Efficiently count the number of odd numbers in the range [start, end]
        ll oddCount = (end + 1) / 2 - (start / 2);

        // If the number of odd numbers is even, the total number of leaves is even
        if (oddCount % 2 == 0) {
            cout << "YES\n";  // Even number of leaves
        } else {
            cout << "NO\n";   // Odd number of leaves
        }
    }
    return 0;
}

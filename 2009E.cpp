#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// Function to calculate the sum of the first `count` numbers starting from `start`
ll sum_of_arithmetic_series(ll start, ll count) {
    return count * (2 * start + (count - 1)) / 2;
}

// Function to calculate the difference between the sum of the first `pos` elements and the rest
ll solve(ll N, ll pos, ll k) {
    // Sum of the first `pos` elements starting from `k`
    ll sum_first_N = sum_of_arithmetic_series(k, pos);
    
    // Sum of the elements after `pos` till `N`
    ll sum_after_N = sum_of_arithmetic_series(k + pos, N - pos);
    
    // Compute and return the absolute difference
    return abs(sum_after_N - sum_first_N);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        // Start with the middle position
        ll pos = n / 2;  
        ll diff = solve(n, pos, k);

        // Edge case for small values of pos (special case handling)
        if (pos == 1) {
            cout << diff << endl;
        } else {
            // Adjust pos until the difference is less than or equal to the element at `k + pos`
            while (diff > (k + pos) && pos < n) {
                pos++;
                diff = solve(n, pos, k);
            }
            cout << diff << endl;
        }
    }
    return 0;
}

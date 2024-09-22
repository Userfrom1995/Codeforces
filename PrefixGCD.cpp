#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// Function to compute the GCD of two numbers
ll gcd(ll a, ll b) {
    while (b != 0) {
        a = a % b;
        swap(a, b);
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t; // number of test cases

    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n), evens, odds;

        // Separate the numbers into even and odd
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                evens.push_back(a[i]);
            } else {
                odds.push_back(a[i]);
            }
        }

        // Sort even and odd numbers separately
        sort(evens.begin(), evens.end());
        sort(odds.begin(), odds.end());

        // Rearrange the array with alternating even and odd numbers
        vector<ll> rearranged;
        int i = 0, j = 0;
        while (i < evens.size() && j < odds.size()) {
            rearranged.push_back(evens[i++]);
            rearranged.push_back(odds[j++]);
        }

        // Add remaining even numbers, if any
        while (i < evens.size()) {
            rearranged.push_back(evens[i++]);
        }

        // Add remaining odd numbers, if any
        while (j < odds.size()) {
            rearranged.push_back(odds[j++]);
        }

        // Compute the sum of GCDs for the rearranged array
        ll result = 0;
        ll current_gcd = 0;

        for (int i = 0; i < n; i++) {
            current_gcd = gcd(current_gcd, rearranged[i]);
            result += current_gcd;
        }

        // Output the result for the current test case
        cout << result << "\n";
    }

    return 0;
}

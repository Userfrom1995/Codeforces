#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common data types

using vll = vector<long long>;

// Function to find maximum XOR
void solve() {
    vll nums = {14, 70, 53, 83, 49, 91, 36, 80, 92, 51, 66};
    int n = nums.size();
    int maxXor = 0;  // To store the maximum XOR value
    int mask = 0;    // To build the prefix mask for current bits

    for (int i = 31; i >= 0; i--) {
        mask |= (1LL << i);  // Update mask to include current bit
        unordered_set<int> prefixes;

        // Collect prefixes with only the top i bits
        for (int num : nums) {
            prefixes.insert(num & mask);
        }

        // Check if we can set the i-th bit in maxXor
        int candidate = maxXor | (1LL << i);
        bool canSetBit = false;

        for (int prefix : prefixes) {
            if (prefixes.count(prefix ^ candidate)) {
                canSetBit = true;
                break;
            }
        }

        if (canSetBit) {
            maxXor = candidate;  // Set the i-th bit in maxXor
        }
    }

    cout << "Maximum XOR: " << maxXor << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}

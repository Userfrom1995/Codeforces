#include <bits/stdc++.h>
using namespace std;

// Function to calculate the maximum score
int maxScore(vector<int>& a) {
    int n = a.size();
    
    // If there are no elements, the score is zero
    if (n == 0) return 0;
    
    // Initialize DP arrays
    vector<int> dp(n, 0);
    vector<int> maxVal(n, 0);
    vector<int> minVal(n, INT_MAX);
    vector<int> count(n, 0);
    
    // Base case
    dp[0] = a[0]; // Only one element can be selected
    maxVal[0] = a[0];
    minVal[0] = a[0];
    count[0] = 1;

    for (int i = 1; i < n; i++) {
        // If we don't take the current element
        dp[i] = dp[i - 1];
        maxVal[i] = maxVal[i - 1];
        minVal[i] = minVal[i - 1];
        count[i] = count[i - 1];

        // If we take the current element
        int currentScore = a[i] + maxVal[i - 1] + minVal[i - 1] + 1; // +1 for the current element
        if (i > 1) {
            currentScore = max(currentScore, a[i] + maxVal[i - 2] + minVal[i - 2] + 2);
        } else {
            currentScore = max(currentScore, a[i] + a[i] + 1);
        }
        
        dp[i] = max(dp[i], currentScore);
        
        // Update max and min values
        maxVal[i] = max(maxVal[i - 1], a[i]);
        minVal[i] = min(minVal[i - 1], a[i]);
        count[i] = count[i - 1] + 1;
    }

    return dp[n - 1];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Length of the array
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; // Read the array elements
        }

        // Calculate and print the maximum score for the test case
        cout << maxScore(a) << endl;
    }

    return 0;
}

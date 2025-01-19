#include <bits/stdc++.h>
using namespace std;

// Function to multiply a number with a large factorial stored as a vector
void multiply(vector<int>& res, int num) {
    int carry = 0; // Carry for multiplication
    for (int i = 0; i < res.size(); i++) {
        int prod = res[i] * num + carry;
        res[i] = prod % 10; // Store last digit in the current position
        carry = prod / 10;  // Update carry
    }
    while (carry) {
        res.push_back(carry % 10); // Append remaining carry digits
        carry /= 10;
    }
}

// Function to calculate factorial
void solve(int t) {
    vector<int> res = {1}; // Result initialized to 1
    
    for (int i = 2; i <= t; i++) {
        multiply(res, i);
    }
    
    // Print result in reverse order
    for (auto it = res.rbegin(); it != res.rend(); ++it) {
        cout << *it;
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    solve(t);
    
    return 0;
}

#include <iostream>
#include <vector>
#include <map>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX_K = 1e5;

// Function to compute Pisano period for Fibonacci modulo k
vector<int> pisano_period(int k) {
    vector<int> fib_mod;
    fib_mod.push_back(0);
    fib_mod.push_back(1);

    vector<int> divisible_indices;
    
    for (int i = 2; i <= 2 * k; i++) {
        int next_fib = (fib_mod[i - 1] + fib_mod[i - 2]) % k;
        fib_mod.push_back(next_fib);
        
        // Check if Fibonacci number is divisible by k
        if (next_fib % k == 0) {
            divisible_indices.push_back(i);
        }
        
        // Check for period start
        if (fib_mod[i - 1] == 0 && fib_mod[i] == 1) {
            break;
        }
    }
    
    return divisible_indices;
}

vector<vector<int>> precompute_pisano() {
    vector<vector<int>> pisano_divisible(MAX_K + 1);
    for (int k = 1; k <= MAX_K; k++) {
        pisano_divisible[k] = pisano_period(k);
    }
    return pisano_divisible;
}

// Function to solve a single test case
int solve(long long n, int k, const vector<vector<int>>& pisano_divisible) {
    const vector<int>& divisible_indices = pisano_divisible[k];
    int period_len = divisible_indices.size();
    
    // Reduce n by the period length
    int idx = (n - 1) % period_len;
    
    return divisible_indices[idx] % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    // Precompute Pisano periods and divisible indices
    vector<vector<int>> pisano_divisible = precompute_pisano();

    while (t--) {
        long long n;
        int k;
        cin >> n >> k;

        int result = solve(n, k, pisano_divisible);
        cout << result << '\n';
    }

    return 0;
}

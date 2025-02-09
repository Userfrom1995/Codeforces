#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common data types
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int, int>;
using pll = pair<long long, long long>;

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

// Shortcuts for common functions
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x.size())

// Looping shortcuts
#define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, n) FOR(i, 0, n)

// Debugging shortcuts (optional, can be removed)
#define DEBUG(x) cerr << #x << " = " << (x) << endl

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<ll>> matrix(n, vector<ll>(m));
    vector<pair<ll, int>> sums;  
   
    for (int i = 0; i < n; i++) {
        ll rowSum = 0;
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
            rowSum += matrix[i][j];
        }
        sums.emplace_back(rowSum, i);
    }

    
    sort(sums.rbegin(), sums.rend());

   
    vector<ll> bigArray;
    for (auto &[sum, idx] : sums) {
        bigArray.insert(bigArray.end(), matrix[idx].begin(), matrix[idx].end());
    }

   
    ll prefixSum = 0, totalScore = 0;
    for (ll num : bigArray) {
        prefixSum += num;
        totalScore += prefixSum;
    }

    cout << totalScore << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
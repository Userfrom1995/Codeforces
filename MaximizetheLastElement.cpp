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
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define REP(i, n) FOR(i, 0, n)

// Debugging shortcuts (optional, can be removed)
#define DEBUG(x) cerr << #x << " = " << (x) << endl

void solve() {
    // Write your main logic here
}
pair<int, int> findMaxAndIndex(const ll arr[], int n) {
    int maxVal = arr[0];  // Initialize with the first element
    int maxIndex = 0;     // Index of the first element
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
    }
    return {maxVal, maxIndex};
}
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {

                ll a;
        cin >> a;
        ll arr[a];
        
        // Input the array elements
        for (ll i = 0; i < a; i++) {
            cin >> arr[i];
        }
        auto result = findMaxAndIndex(arr, a);
        
        // While loop condition checks if the index is either 1 or a - 2
        while (result.second%2!=0) {
            arr[result.second] = 0;
            result = findMaxAndIndex(arr, a);
        }
        
        // Output the result index
        cout << result.first << "\n";
    }
    return 0;
}
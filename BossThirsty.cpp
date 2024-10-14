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

ll maxSubArraySum(vector<ll>& arr) {
    ll n = arr.size();
    ll max_sum = LLONG_MIN;  // Initialize max_sum to the smallest possible value
    ll curr_sum = 0;         // This will store the sum of the current subarray

    for (ll i = 0; i < n; i++) {
        curr_sum += arr[i];  // Add current element to current sum

        // Update max_sum if curr_sum is greater
        max_sum = max(max_sum, curr_sum);

        // If curr_sum becomes negative, reset it to 0
        if (curr_sum < 0) {
            curr_sum = 0;
        }
    }

    return max_sum;
}

void solve() {
    ll n , size;
    cin >> n >> size;
    ll ans =0;
    while(n--){
       vll a(size);      
         for(ll i = 0; i < size; i++){
              cin >> a[i];
         }
         cout<<  maxSubArraySum(a)<<endl;

    }
    cout << ans << "\n";
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
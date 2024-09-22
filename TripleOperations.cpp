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

void solve()
{
    // Write your main logic here
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    map<ll, ll> maxDivisions;  // Memoization for divisions
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        ll count = b - a + 1;
        ll ans = 0;
        vector<ll> arr(count);

        for (ll i = 0; i < count; i++)
        {
            arr[i] = a++;
        }

        for (ll i = 0; i < count; i++)
        {
            ll val = arr[i];
            ll steps = 0;

            // Check if we have already computed the steps for this value
            if (maxDivisions.find(val) != maxDivisions.end())
            {
                ans += maxDivisions[val];
                continue;
            }

            // Calculate the steps to reduce to zero
            while (val != 0)
            {
                
                    val /= 3;
             
                steps++;
            }

            // Store the result for future reference
            maxDivisions[arr[i]] = steps;
            ans += steps;
        }

        cout << ans + maxDivisions[arr[0]]<< "\n";
    }

    return 0;
}

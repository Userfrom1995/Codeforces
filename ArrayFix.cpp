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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll a(n);
        FOR(i, 0, n)
            cin >> a[i];
        vll b;
        b.push_back(a[n - 1]);
        for (ll i = n - 2; i >= 0; --i)
        {
            if (a[i] > b.back())
            {
                b.push_back(a[i] % 10);
                b.push_back(a[i] / 10);
            }
            else
            {
                b.push_back(a[i]);
            }
        }
        cout << (is_sorted(b.rbegin(), b.rend()) ? "YES" : "NO") << '\n';
    }
    return 0;
}
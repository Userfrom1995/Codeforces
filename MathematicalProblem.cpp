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

void solve()
{
    ll n;
    cin >> n;
    string num;
    cin >> num;
    ll ans[n - 1] = {0};
    if (n == 2)
    {
        cout <<  (num[0] - '0') * 10 + (num[1] - '0') << endl;
        return;
    }
    if (n != 3)
    {
        for (ll i = 0; i < n; i++)
        {
            if (num[i] == '0')
            {
                cout << 0 << "\n";
                return;
            }
        }
    }

    for (ll i = 0; i < n - 1; i++)
    {
        ll min = (num[i] - '0') * 10 + (num[i + 1] - '0');

        for (ll j = 0; j < n; j++)
        {
            if (j != i ){
                if(j != i+1)
            {
                if (num[j]  == '0')
                {
                    cout << 0 << "\n";
                    return;
                }
                else if (num[j]  == '1')
                {
                    min = min;
                }
                else
                {   if(min == 1){
                    min = min*(num[j] - '0');
                }
                else{
                    min = min + (num[j] - '0');
                }
                }
            }
        }
        }
        ans[i] = min;
    }

    ll minimum = ans[0];
    for (int i = 1; i < n - 1; ++i)
    {
        if (ans[i] < minimum)
        {
            minimum = ans[i];
        }
    }

    cout << minimum << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define ull unsigned long long
#define mxx 1e18 - 1
using namespace std;

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            mp[i] ++;
        }
        else
        {
            ll totSeg = (n - i - 1) + (i * (n - i));
            mp[totSeg]++;
            ll remainingInteger = v[i + 1] - v[i]-1;
            ll secondSeg = ((i+1) * (n - i - 1));
            mp[secondSeg] += remainingInteger;
        }
    }
    vector<ll> ans;
    for (ll i = 0; i < q; i++)
    {
        ll x;
        cin >> x;
        ans.push_back(mp[x]);
    }
    for (auto child : ans)
    {
        cout << child << " ";
    }
    cout << endl;
}
// Easy one but was having a bad day so took time to solve it.
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}
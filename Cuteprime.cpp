#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common data types
using ll = long long;

// Debugging shortcuts (optional, can be removed)
#define DEBUG(x) cerr << #x << " = " << (x) << endl
bool isprime[1000001] = {0};
void sieve_of_eratosthenes(int n)
{
    fill(isprime, isprime + n + 1, true);
    isprime[0] = isprime[1] = false;

    for (ll i = 2; i * i <= n; ++i)
    {
        if (isprime[i])
        {
            for (ll j = i * i; j <= n; j += i)
            {
                isprime[j] = false;
            }
        }
    }
}

void solve()
{
    ll n;

    cin >> n;

    sieve_of_eratosthenes(n);

     int cutePrimeCount = 0;
    for (ll p = 5; p <= n; ++p) { 
        if (isprime[p] && isprime[p - 2]) { 
            cutePrimeCount++;
        }
    }
    cout << cutePrimeCount << "\n";
}
    

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
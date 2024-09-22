#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common data types
using ll = long long;

// Looping shortcuts
#define f(i, a, b) for (ll i = a; i < b; i++)
// #define vector<long long> vll;

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

        vector<long long> arr(n); // Use vector instead of a C-style array
        f(i, 0, n)
        {
            cin >> arr[i];
        }

        ll c;
        cin >> c;

        while (c--)
        {
            string s;
            cin >> s;

            unordered_map<char, ll> myMap;
            unordered_map<ll, char> myMap2;
            vector<long long> unique;

            bool isInconsistent = true;

            if (n != s.length())
            {
                cout << "NO\n";
                continue; // Skip this test case if lengths don't match
            }

            f(i, 0, n)
            {
                char ch = s[i];

                // If the character already exists in the map, check if its mapped value is consistent
                if (myMap.find(ch) == myMap.end() && myMap2.find(arr[i]) == myMap2.end())
                {
                    myMap[ch] = arr[i];
                    myMap2[arr[i]] = ch;
                }
                else if ((myMap.find(ch) != myMap.end() && myMap[ch] != arr[i]) ||
                         (myMap2.find(arr[i]) != myMap2.end() && myMap2[arr[i]] != ch))
                {
                    isInconsistent = false;
                    break;
                }
            }

            // Output the result based on the consistency check
            if (isInconsistent)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common data types
using ll = long long;
using vvll = vector<vector<ll>>;

void solve() {
    ll n, m;
    cin >> n >> m;

   
    vvll arr(n, vector<ll>(m));

   
    string s;
    cin >> s;

    
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    ll x = 0, y = 0; 
    for (char c : s) {
        if (x >= n || y >= m) break; 

        if (c == 'D') { 
            ll sum = 0;
            for (ll j = 0; j < m; j++) {
                sum += arr[x][j];
            }
            arr[x][y] = -sum; 
            x++;
        } else if (c == 'R') { 
            ll sum = 0;
            for (ll i = 0; i < n; i++) {
                sum += arr[i][y];
            }
            arr[x][y] = -sum; 
            y++;
        }
    }

    
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        sum += arr[i][m - 1];
    }
    arr[n - 1][m - 1] = -sum;

    
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
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

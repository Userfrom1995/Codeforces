#include <bits/stdc++.h>
using namespace std;

// Constants
const int INF = 1e9;
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


#define DEBUG(x) cerr << #x << " = " << (x) << endl


class SparseTable {
private:
    vector<vector<int>> table;
    vector<int> log_table;
    int n;

public:
    SparseTable(const vector<int>& arr, bool isMax) {
        n = arr.size();
        log_table.resize(n + 1);
        log_table[1] = 0;
        for (int i = 2; i <= n; ++i) {
            log_table[i] = log_table[i / 2] + 1;
        }

        int max_log = log_table[n];
        table.assign(n, vector<int>(max_log + 1));

        for (int i = 0; i < n; ++i) {
            table[i][0] = arr[i];
        }

        for (int j = 1; j <= max_log; ++j) {
            for (int i = 0; i + (1 << j) <= n; ++i) {
                if (isMax) {
                    table[i][j] = max(table[i][j - 1], table[i + (1 << (j - 1))][j - 1]);
                } else {
                    table[i][j] = min(table[i][j - 1], table[i + (1 << (j - 1))][j - 1]);
                }
            }
        }
    }

    int query(int l, int r) {
        int log = log_table[r - l + 1];
        return max(table[l][log], table[r - (1 << log) + 1][log]);
    }

    int queryMin(int l, int r) {
        int log = log_table[r - l + 1];
        return min(table[l][log], table[r - (1 << log) + 1][log]);
    }
};


int convenience(SparseTable& maxTable, SparseTable& minTable, int l, int r) {
    int maximum = maxTable.query(l, r);
    int minimum = minTable.queryMin(l, r);
    return maximum - minimum - (r - l);
}


int getconvenience(SparseTable& maxTable, SparseTable& minTable, int n) {
    int max_convenience = INT_MIN;
    for (int l = 0; l < n; ++l) {
        for (int r = l; r < n; ++r) {
            max_convenience = max(max_convenience, convenience(maxTable, minTable, l, r));
        }
    }
    return max_convenience;
}

void solve() {
    int n, q; 
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    SparseTable maxTable(a, true);  
    SparseTable minTable(a, false); 

    cout << getconvenience(maxTable, minTable, n) << endl;

    for (int i = 0; i < q; ++i) {
        int p, x;
        cin >> p >> x;
        a[p - 1] = x; 

        
        maxTable = SparseTable(a, true);
        minTable = SparseTable(a, false);

        cout << getconvenience(maxTable, minTable, n) << endl;
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

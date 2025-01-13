#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (long long &x : a) cin >> x;
    for (long long &x : b) cin >> x;

    long long reject = -1, mini = LLONG_MAX;
    for (long long i = 0; i < n; ++i) {
        if (a[i] >= b[i]) {
            mini = min(mini, a[i] - b[i]);
        } else {
            if (reject == -1) {
                reject = i; 
            } else {
                cout << "NO\n";
                return; 
            }
        }
    }

    if (reject == -1) {
        cout << "YES\n"; 
    } else {
        if (mini >= (b[reject] - a[reject])) {
            cout << "YES\n"; }
        else{
            cout << "NO\n"; 
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

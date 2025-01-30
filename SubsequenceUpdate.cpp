#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, l, r, i, a[200000];
    cin >> t;
    while (t--) {
        cin >> n >> l >> r;
        l--;  

        for (i = 0; i < n; i++) cin >> a[i];

        
        vector<int> c(a + l, a + n);
        sort(a, a + r);
        sort(c.begin(), c.end());

        
        cout << min(accumulate(a, a + r - l, 0LL), accumulate(c.begin(), c.begin() + r - l, 0LL)) << '\n';
    }
}

#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<lli>;

// Function to compute the next power operations needed
lli getNext(lli pv, lli pw, lli cur) {
    if (cur == pv) return pw;
    if (cur == 1) return -1;
    if (pv == 1) return 0;
    const double det = log2(log2((double)pv)) - log2(log2((double)cur));
    return max(0LL, pw + (lli)ceil(det));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    lli T;
    cin >> T;
    while (T--) {
        lli n;
        cin >> n;
        vi a(n);
        for (auto &x : a) cin >> x;

        lli ans = 0, pvr = 0;
        bool valid = true;
        for (lli i = 1; i < n; i++) {
            lli c = getNext(a[i - 1], pvr, a[i]);
            if (c == -1) {
                ans = -1;
                valid = false;
                break;
            }
            pvr = c;
            ans += c;
        }
        cout << ans << endl;
    }
    return 0;
}

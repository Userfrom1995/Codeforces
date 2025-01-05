#include <bits/stdc++.h>
     
#define int long long
 
using namespace std;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int l, r;
    cin >> l >> r;
    cout << (1ll << (__lg(l ^ r) + 1)) - 1 << '\n';
}
// took a while to understand.
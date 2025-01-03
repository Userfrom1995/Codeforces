#include <iostream>
#include <vector>
#include <algorithm>

using ll = long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;

        std::vector<int> a(n);
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }
        std::sort(a.begin(), a.end());
        
        ll ans = 0;
        ll j = 0;
        for (ll i = 0; i < n; i++) {
            j = std::max(j, i); 
            while (j + 1 < n && a[j + 1] - a[j] <= 1 && a[j + 1] - a[i] < k) {
                j++;
            }
            ans = std::max(ans, j - i + 1);
        }
        std::cout << ans << "\n";
    }
    return 0;
}

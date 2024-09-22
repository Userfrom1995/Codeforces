#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        ll n;
        string s, t;
        cin >> n >> s >> t;
        ll u;
        cin >> u;
        
        while (u--) {
            ll start, end;
            cin >> start >> end;
            
            start--;  // Convert to 0-based index
            end--;
            
            string s1 = s;  // Copy original strings for this case
            string t1 = t;
            
            ll increment = 0;
            for (ll i = start; i <= end; i++) {
                if (s1[i] == '1') increment++;  // Count initial '1's
            }

            bool changed = true;
            while (changed) {
                changed = false;

                // Iterate over the range in one pass, updating both strings
                for (ll i = start; i + 2 <= end; i++) {
                    if (s1[i] == '0' && s1[i + 2] == '0' && t1[i + 1] != '1') {
                        t1[i + 1] = '1';  // Update `t`'s middle element
                        changed = true;
                    }

                    if (t1[i] == '1' && t1[i + 2] == '1' && s1[i + 1] != '1') {
                        s1[i + 1] = '1';  // Update `s`'s middle element
                        increment++;
                        changed = true;
                    }
                }
            }

            cout << increment << "\n";
        }
    }

    return 0;
}

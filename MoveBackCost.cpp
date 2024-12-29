#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t; 
    while (t--) {
        int n; 
        cin >> n;
        multiset<pair<int, int>> ms;

        
        for (int i = 0; i < n; i++) {
            int x; 
            cin >> x;
            ms.insert({x, i});
        }

        int cur = 0;
        while (!ms.empty()) {
            auto it = ms.begin();
            int value = it->first;
            int index = it->second;
            ms.erase(it);

            if (index >= cur) {
                cout << value << " ";
                cur = index;
            } else {
                ms.insert({value + 1, n}); 
            }
        }

        cout << "\n"; 
    }
    return 0;
}

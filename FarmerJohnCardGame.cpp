#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> cards(n); 
        vector<pair<int, int>> minCards; 
        for (int i = 0; i < n; i++) {
            cards[i].resize(m);
            for (int j = 0; j < m; j++) {
                cin >> cards[i][j];
            }
            sort(cards[i].begin(), cards[i].end());
            minCards.push_back({cards[i][0], i});   
        }

        
        sort(minCards.begin(), minCards.end());

        vector<int> p(n); 
        for (int i = 0; i < n; i++) {
            p[i] = minCards[i].second + 1; 
        }

        
        int topCard = -1; 
        bool valid = true;

        for (int round = 0; round < m; round++) {
            for (int i = 0; i < n; i++) {
                int cow = p[i] - 1;
                auto it = upper_bound(cards[cow].begin(), cards[cow].end(), topCard);
                if (it == cards[cow].end()) {
                    valid = false; 
                    break;
                }
                topCard = *it; 
                cards[cow].erase(it); 
            }
            if (!valid) break;
        }

        if (valid) {
            for (int i = 0; i < n; i++) {
                cout << p[i] << " ";
            }
            cout << "\n";
        } else {
            cout << "-1\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 2e5 + 5;
int T, n, u, v, d[maxn], ans;
vector<int> e[maxn];

int main() {
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        ans = 0;

        // Reset graph and degree array
        for (int i = 1; i <= n; i++) {
            e[i].clear();
            d[i] = 0;
        }

        for (int i = 1; i < n; i++) {
            scanf("%d%d", &u, &v);
            e[u].emplace_back(v);
            e[v].emplace_back(u);
            d[u]++;
            d[v]++;
        }

        // Debug: Print adjacency list
        for (int i = 1; i <= n; i++) {
            cout << "Node " << i << ": ";
            for (int neighbor : e[i]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }

        // Perform DFS or other operations as needed (currently commented out)
        // dfs(1, 0);
        // printf("%d\n", ans);
    }
    return 0;
}

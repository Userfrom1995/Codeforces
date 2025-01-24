#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common data types
using ll = long long;

// Constants
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ll LINF = 1e18;

// Depth-First Search (DFS)
void dfs(ll node, vector<vector<ll>>& adjList, vector<bool>& visited) {
    visited[node] = true;
    for (ll neighbor : adjList[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adjList, visited);
        }
    }
}

// Count connected components in the graph
ll countConnectedComponents(ll n, vector<vector<ll>>& adjList) {
    vector<bool> visited(n, false);
    ll connectedComponents = 0;

    for (ll i = 0; i < n; i++) {
        if (!visited[i]) {
            connectedComponents++;
            dfs(i, adjList, visited);
        }
    }

    return connectedComponents;
}

void solve() {
    ll n, m;
    cin >> n >> m;

    // Dynamic adjacency list
    vector<vector<ll>> adjList(n);

    while (m--) {
        ll a, d, k;
        cin >> a >> d >> k;
        a--;  // Convert to 0-based indexing

        ll prev = a;
        while (k--) {
            ll nextVertex = prev + d;
            if (nextVertex >= n) break;  // Stop if we exceed the number of vertices

            // Add the undirected edge
            adjList[prev].push_back(nextVertex);
            adjList[nextVertex].push_back(prev);

            prev = nextVertex;
        }
    }

    // Count and print the number of connected components
    ll connectedComponents = countConnectedComponents(n, adjList);
    cout << connectedComponents << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
// RUNOUT OF MEMORY ERROR

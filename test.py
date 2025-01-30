import networkx as nx
import matplotlib.pyplot as plt

def visualize_tree(n, edges, ranges, dfs2_results, dfs_results, title):
    """Visualizes the tree and annotates nodes with their current values."""
    G = nx.Graph()

    # Add nodes and their [l, r] ranges
    for i in range(1, n + 1):
        G.add_node(i, label=f"[{ranges[i][0]}, {ranges[i][1]}]")

    # Add edges
    for a, b in edges:
        G.add_edge(a, b)

    # Positions for visualization
    pos = nx.spring_layout(G)  # Spring layout positions

    # Draw the graph
    plt.figure(figsize=(10, 7))
    nx.draw(G, pos, with_labels=True, node_size=700, font_size=12, font_color='white', node_color='blue')

    # Annotate nodes with dfs2 and dfs results
    for node in G.nodes():
        # Node label includes l, r range, dfs2 value (c[v]), and dfs value (dp[v])
        label = f"{node}\n{G.nodes[node]['label']}\n"
        if dfs2_results[node] is not None:
            label += f"c[v]: {dfs2_results[node]}\n"
        if dfs_results[node] is not None:
            label += f"dp[v]: {dfs_results[node]}"
        plt.text(pos[node][0], pos[node][1] + 0.1, label, fontsize=9, ha='center', color='black')

    plt.title(title)
    plt.show()


def main():
    # Example input
    n = 4
    ranges = {
        1: (0,11),
        2: (6, 6),
        3: (0,0),
        4: (5,5),
       
    }
    edges = [
        (2,1),
        (3,1),
        (4,3),
    ]

    # Initialize `c[v]` and `dp[v]`
    c = {i: None for i in range(1, n + 1)}
    dp = {i: 0 for i in range(1, n + 1)}

    # Create adjacency list
    adj = {i: [] for i in range(1, n + 1)}
    for a, b in edges:
        adj[a].append(b)
        adj[b].append(a)

    # Perform `dfs2` to calculate `c[v]`
    def dfs2(v, par):
        ma = 0
        for x in adj[v]:
            if x != par:
                dfs2(x, v)
                ma = max(ma, c[x])
        c[v] = max(ranges[v][0], min(ranges[v][1], ma))

    dfs2(1, 0)

    # Visualize after `dfs2`
    visualize_tree(
        n, edges, ranges,
        dfs2_results=c,
        dfs_results={i: None for i in range(1, n + 1)},
        title="After dfs2 (c[v] Computed)"
    )

    # Perform `dfs` to calculate `dp[v]`
    def dfs(v, par):
        for x in adj[v]:
            if x != par:
                dfs(x, v)
                dp[v] += dp[x]
                if c[x] > c[v]:
                    dp[v] += c[x] - c[v]

    dfs(1, 0)

    # Visualize after `dfs`
    visualize_tree(
        n, edges, ranges,
        dfs2_results=c,
        dfs_results=dp,
        title="After dfs (dp[v] Computed)"
    )

    # Final result
    print(f"Final Result: {dp[1] + c[1]}")

main()

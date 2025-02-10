#include <bits/stdc++.h>

using namespace std;

bool bfs(vector<vector<int>>& adj, vector<int>& vis, int i) {
    queue<pair<int, int>> q; // {current_node, parent_node}
    q.push({i, -1});         // Start with the source node, parent = -1
    vis[i] = 1;              // Mark the source node as visited

    while (!q.empty()) {
        auto temp = q.front();
        q.pop();

        int u = temp.first;  // Current node
        int p = temp.second; // Parent node

        for (auto& x : adj[u]) { 
            if (!vis[x]) {        // If neighbor not visited
                vis[x] = 1;       // Mark it visited
                q.push({x, u});   // Push it into the queue with current node as parent
            } else if (x != p) {  // If visited and not the parent, a cycle is detected
                return true;
            }
        }
    }
    return false; // No cycle detected in this component
}

bool isCycle(vector<vector<int>>& adj) {
    vector<int> vis(adj.size(), 0); // Visited array

    // Check for cycles in all components of the graph
    for (int i = 0; i < adj.size(); i++) {
        if (!vis[i]) {               // If the node is unvisited
            if (bfs(adj, vis, i))    // Perform BFS from this node
                return true;         // Cycle detected
        }
    }

    return false; // No cycle in any component
}


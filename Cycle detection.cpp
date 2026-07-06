class Solution {
public:
    bool bfs(int src, vector<int> adj[], vector<bool>& vis) {
        queue<pair<int, int>> q;
        q.push({src, -1});
        vis[src] = true;

        while (!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();

            for (int neighbour : adj[node]) {
                if (!vis[neighbour]) {
                    vis[neighbour] = true;
                    q.push({neighbour, node});
                }
                else if (neighbour != parent) {
                    return true;
                }
            }
        }

        return false;
    }

    bool isCycle(int V, vector<int> adj[]) {
        vector<bool> vis(V, false);

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (bfs(i, adj, vis))
                    return true;
            }
        }

        return false;
    }
};

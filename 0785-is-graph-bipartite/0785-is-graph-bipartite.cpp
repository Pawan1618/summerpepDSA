class Solution {
public:
    bool dfs(int node, int color, vector<int>& vis, vector<vector<int>>& graph) {
        vis[node] = color;

        for (int neighbour : graph[node]) {

            // If not colored, color with opposite color
            if (vis[neighbour] == 0) {
                int nextColor = (color == 1) ? 2 : 1;

                if (!dfs(neighbour, nextColor, vis, graph))
                    return false;
            }

            // If already colored with same color
            else if (vis[neighbour] == vis[node]) {
                return false;
            }
        }

        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> vis(n, 0);   // 0 = unvisited, 1 = Color A, 2 = Color B

        for (int i = 0; i < n; i++) {
            if (vis[i] == 0) {
                if (!dfs(i, 1, vis, graph))
                    return false;
            }
        }

        return true;
    }
};
class DSU {
    vector<int> parent;
    vector<int> size;

public:
    DSU(int n) {
        parent.resize(n);
        size.resize(n, 1);

        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;

        return parent[node] = findUPar(parent[node]);
    }

    void unionBySize(int u, int v) {
        int pu = findUPar(u);
        int pv = findUPar(v);

        if (pu == pv)
            return;

        if (size[pu] < size[pv]) {
            parent[pu] = pv;
            size[pv] += size[pu];
        } else {
            parent[pv] = pu;
            size[pu] += size[pv];
        }
    }
};

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {

        int n = isConnected.size();

        DSU dsu(n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                if (i != j && isConnected[i][j]) {
                    dsu.unionBySize(i, j);
                }
            }
        }

        unordered_set<int> components;

        for (int node = 0; node < n; node++) {
            components.insert(dsu.findUPar(node));
        }

        return components.size();
    }
};
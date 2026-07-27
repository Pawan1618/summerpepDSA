class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>>mat(n,vector<int>(n,1e9));
            for(auto& e:edges){
                int u=e[0],v=e[1],w=e[2];
                mat[u][v]=w;
                mat[v][u]=w;
            }
                    for (int i = 0; i < n; ++i)
            mat[i][i] = 0;
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                if(mat[i][k]==1e9)continue;
                for(int j=0;j<n;j++){
                    if(mat[k][j]==1e9)continue;
                    mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
                }
            }
        }
        int res=0,smallest=n;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; ++j)
                if (mat[i][j] <= distanceThreshold)
                    ++count;
            if (count <= smallest) {
                res = i;
                smallest = count;
            }
        }
        return res;

        
    }
};
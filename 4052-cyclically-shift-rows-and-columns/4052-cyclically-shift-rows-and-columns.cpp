class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>>g(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            int temp=rowShift[i];
            for(int j=0;j<n;j++){
                g[i][j]=grid[i][(j+temp)%n];
                // g[i][j]=grid[(i-colShift[i]+n)%n][j];
            }

        }
        vector<vector<int>> ans(n, vector<int>(n, 0));
        for(int j=0;j<n;j++){
            int temp=colShift[j];
            for(int i=0;i<n;i++){
                ans[i][j]=g[(i+temp)%n][j];
                
            }
        }
        return ans;
    }
};
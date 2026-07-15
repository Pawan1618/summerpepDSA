class Solution {
  public:
    vector<vector<int>> adjToMat(vector<vector<int>>& adj) {
        // code here
        int n=adj.size();
        vector<vector<int>>res(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            int m=adj[i].size();
            for(int j=0;j<m;j++){
                int val=adj[i][j];
                res[i][val]=1;
                
            }
        }
        return res;
        
    }
};

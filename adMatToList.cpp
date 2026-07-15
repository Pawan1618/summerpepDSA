class Solution {
  public:
    vector<vector<int>> matToAdj(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>res;
        for(int i=0;i<n;i++){
            vector<int>temp;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1)temp.push_back(j);
            }
            res.push_back(temp);
        }
        return res;
    }
};

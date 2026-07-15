class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int sm=0;
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>res;
        for(int i=0;i<m;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(matrix[i][j]==1){
                    cnt++;
                }
            }
            res.push_back(cnt);
        }
        return res;
        
    }
};
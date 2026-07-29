class Solution {
public:
    // int solve(int i,int j,vector<vector<int>>&arr,vector<vector<int>>&dp){
    //     if(i==0&&j==0&&arr[i][j]!=1)return 1;
    //     if(i<0||j<0)return 0;
    //     if(arr[i][j]==1)return 0;
    //     if(dp[i][j]!=-1)return dp[i][j];
    //     int up=solve(i-1,j,arr,dp);
    //     int left=solve(i,j-1,arr,dp);
    //     return dp[i][j]= up+left;
    // }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        // return solve(n-1,m-1,obstacleGrid,dp);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0&&j==0&&obstacleGrid[0][0]!=1)dp[0][0]=1;
                else{
                    if(obstacleGrid[i][j]!=1){
                        int left=0,up=0;
                        if(i>0)left=dp[i-1][j];
                        if(j>0)up=dp[i][j-1];
                        dp[i][j]=left+up;
                    }
                }
            }
        }
        return dp[n-1][m-1];

        
    }
};
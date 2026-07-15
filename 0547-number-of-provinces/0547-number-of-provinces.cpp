class Solution {
public:
    void dfs(int i,vector<int>&vis,vector<vector<int>>&isConnected,int n){
        vis[i]=1;
        for(int j=0;j<n;j++){
            if(!vis[j]&&isConnected[i][j]==1){
                dfs(j,vis,isConnected,n);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int cnt=0;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                cnt++;
                dfs(i,vis,isConnected,n);
            }
        }
        return cnt;
        
    }
};
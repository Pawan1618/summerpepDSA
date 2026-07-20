class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size(); 
        vector<vector<int>>res(n,vector<int>(m));
        vector<int>temp;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                temp.push_back(grid[i][j]);
            }
        }
        k %= temp.size();
        if(k == 0) return grid;
        int s=0;
        s=temp.size()-k;
        // cout<<s;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                res[i][j]=temp[s];
                s++;
                if(s==temp.size())s=0;
                
            }
        }
        return res;

        
    }
};
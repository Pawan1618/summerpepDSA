class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>res(n,vector<bool>(m,false));
        res[0][0]=true;

        vector<int>fin;
        int curr=0;
        int curc=0;
        while(true){
            char temp=grid[curr][curc];
             int nr=curr;
              int nc=curc;
            if(temp=='L')nc--;
            else if(temp=='R')nc++;
            else if(temp=='U')nr--;
            else if(temp=='D')nr++;
            if(nc>=m||nc<0||nr>=n||nr<0||res[nr][nc]==true){
                    return {curr,curc};
            }
            res[nr][nc]=true;
            curr=nr;
            curc=nc;


        }
        return fin;
        
    }
};
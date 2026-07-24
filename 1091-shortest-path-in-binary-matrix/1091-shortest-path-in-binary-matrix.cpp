class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]==1||grid[n-1][n-1]==1)return -1;
        queue<pair<int,int>>q;
        q.push({0,0});
        grid[0][0]=1;

        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            int curDis=grid[x][y];
            for(int dx=-1;dx<=1;dx++){
                for(int dy=-1;dy<=1;dy++){
                    if(dy==0&&dx==0)continue;
                    int newX=(x+dx);
                    int newY=(y+dy);
                    if(newX>=0&&newX<n&&newY>=0&&newY<n&&grid[newX][newY]==0){
                        grid[newX][newY]=curDis+1;


                        q.push({newX,newY});
                    }
                }
            }
               
        }
        return (grid[n-1][n-1]==0?-1:grid[n-1][n-1]);
        
    }
};
class Solution {
public:
    void dfs(int i,int j,int c,vector<vector<int>>&im,int val){
        if(i<0||i>=im.size()||j<0||j>=im[0].size()||im[i][j]!=val||val==c)return;
        im[i][j]=c;
        dfs(i+1,j,c,im,val);
        dfs(i-1,j,c,im,val);
        dfs(i,j+1,c,im,val);
        dfs(i,j-1,c,im,val);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>res;
        int val=image[sr][sc];
        dfs(sr,sc,color,image,val);
        return image;
    }
};
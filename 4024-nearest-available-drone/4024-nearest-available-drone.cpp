class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int res=-1;
        
        int n=drones.size();
        int prev=INT_MAX;
        
        for(int i=0;i<n;i++){
            int x=drones[i][0];
            int y=drones[i][1];
            int r=drones[i][2];
            int d=abs(x-target[0])+abs(y-target[1]);
            if(d<=r&&d<prev){
                res=i;
                prev=d;
                
            }
        }
        return res;
    }
};
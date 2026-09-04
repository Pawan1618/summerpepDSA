class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>maxi(n);
        vector<int>mini(n);
        int mx=nums[0];
        int mn=nums[n-1];
        for(int i=0;i<n;i++){
            if(nums[i]>=mx){
                mx=nums[i];
            }
            maxi[i]=mx;
            // mini[i]=mn;
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]<=mn){
                mn=nums[i];
            }
            mini[i]=mn;
        }
        for(int i=0;i<n;i++){
            if((maxi[i]-mini[i])<=k)return i;
        }
        return -1;

        
    }
};
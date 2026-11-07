class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int mini=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n-1;i+=2){
            int t=nums[i+1];
            int f=nums[i];
            while(t>0){
                f*=10;
                t/=10;
            }
            f+=nums[i+1];
            mini=min(mini,f);
        }
        return mini;
    }
};
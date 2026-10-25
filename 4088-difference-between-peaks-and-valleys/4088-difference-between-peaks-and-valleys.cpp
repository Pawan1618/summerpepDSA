class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int n=nums.size();
        int ps=0;
        int vs=0;
        for(int i=1;i<n-1;i++){
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]){
                ps+=nums[i];
            }
        }
        for(int i=1;i<n-1;i++){
            if(nums[i]<nums[i-1]&&nums[i]<nums[i+1]){
                vs+=nums[i];
            }
        }
        return ps-vs;
        
    }
};
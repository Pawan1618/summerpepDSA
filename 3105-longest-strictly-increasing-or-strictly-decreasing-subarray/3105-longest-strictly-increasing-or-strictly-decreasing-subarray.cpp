class Solution {
public:
    
    int longestMonotonicSubarray(vector<int>& nums) {
        int cnt1=0;
        int maxi=0;
        int prev=INT_MIN;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]>prev){
                prev=nums[i];
                cnt1++;
                maxi=max(maxi,cnt1);
            }
            else{
                prev=nums[i];
                cnt1=1;
                
            }
        }
        cnt1=0;
        int max2=0;
        prev=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]<prev){
                prev=nums[i];
                cnt1++;
                max2=max(max2,cnt1);
            }
            else{
                prev=nums[i];
                cnt1=1;
                // prev=INT_MAX;
            }
        }
        return max(maxi,max2);
    }
};
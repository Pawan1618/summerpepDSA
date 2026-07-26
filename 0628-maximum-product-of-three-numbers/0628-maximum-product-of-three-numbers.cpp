class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int n1=nums[0]*nums[2]*nums[1];
        int n2=nums[n-1]*nums[n-2]*nums[n-3];
        int n3=nums[0]*nums[1]*nums[n-1];
        return max({n1,n2,n3});
        
        
    }
};
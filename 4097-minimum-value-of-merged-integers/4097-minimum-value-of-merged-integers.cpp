class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int mini=INT_MAX;
        int n=nums.size();
        vector<string>s;
        for(int i=0;i<n-1;i=i+2){
            string t="";
            t+=to_string(nums[i]);
            t+=to_string(nums[i+1]);
            s.push_back(t);
            // cout<<t<<" ";
            mini=min(mini,stoi(t));
            // cout<<s[i]<<" ";
        }
        return mini;
    }
};
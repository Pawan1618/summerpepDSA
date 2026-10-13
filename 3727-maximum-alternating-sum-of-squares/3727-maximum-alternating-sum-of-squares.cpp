class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            res.push_back(abs(nums[i]));
        }
        long long ans=0;
        sort(res.begin(),res.end());
        for(int i=0;i<n/2;i++){
            cout<<i;
            ans+=-(res[i]*res[i]);
            ans+=res[n-i-1]*res[n-i-1];
        }
        // cout<<n;
        if(n%2!=0){
            int temp=n/2;
            // cout<<res[temp];
            ans+=res[temp]*res[temp];
        }
        return ans;
        
    }
};
class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>m(n);
        int maxi=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]>=maxi){
                maxi=nums[i];
            }
            m[i]=maxi;

        }
        vector<int>prefgcd(n);
        for(int i=0;i<n;i++){
            prefgcd[i]=__gcd(nums[i],m[i]);
        }
        sort(prefgcd.begin(),prefgcd.end());
        long long sum=0;
        int i=0;
        int j=n-1;
        while(i<j){
            sum+=__gcd(prefgcd[i],prefgcd[j]);
            i++;
            j--;

        }
        return sum;

        
    }
};
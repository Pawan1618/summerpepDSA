class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        int res=0;
        for(auto&i:mp){
            int k=i.first;
            vector<int>v=i.second;
            int s=v.size();
            if(s>=3){
                bool flag=false;
                int t=v[1]-v[0];
                for(int i=2;i<s;i++){
                    if(v[i]-v[i-1]==t){
                        flag=true;
                    }
                    else{
                        flag=false;
                        break;
                    }
                }
                if(flag)res++;
            }
        }
        return res;
    }
};
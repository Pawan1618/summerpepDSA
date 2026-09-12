class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        int res=0;
        for(auto& i:mp){
            int key=i.first;
            vector<int>v=i.second;
            // bool flag=false;
            if(v.size()==3){
            if(v[1]-v[0]==v[2]-v[1]){
                res++;
            }
            }

        }
        return res;
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<int>temp;
        for(auto&i:mp){
            temp.push_back(i.second);
        }
        sort(temp.rbegin(),temp.rend());
        // for(int i=0;i<temp.size();i++)cout<<temp[i]<<" ";
        vector<int>res;
        for(int i=0;i<k;i++){
            for(auto&j:mp){
                if(j.second==temp[i]){
                    res.push_back(j.first);
                    mp[j.first]=0;
                    break;
                }
            }
        }
        return res;
        
    }
};
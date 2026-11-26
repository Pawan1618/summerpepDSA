class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>res;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        //min heap bcoz top k 
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto i:mp){
            // cout<<i.first<<" "<<i.second<<endl;
            pq.push({i.second,i.first});
            if(pq.size()>k){
                pq.pop();
            }

        }
        int s=pq.size();
        for(int i=0;i<s;i++){
            pair<int,int>p=pq.top();
            // cout<<p.first<<" "<<p.second<<endl;
            res.push_back(p.second);
            pq.pop();
        }
        return res;
    }
};
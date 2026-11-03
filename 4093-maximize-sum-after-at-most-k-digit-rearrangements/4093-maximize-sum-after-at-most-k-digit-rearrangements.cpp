class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        vector<pair<int,int>>res;
        int n=nums.size();
        vector<int>rev;
        for(int i=0;i<n;i++){
            int t=nums[i];
            vector<int>temp;
            while(t>0){
                int rem=t%10;
                temp.push_back(rem);
                t=t/10;
            }
            sort(temp.rbegin(),temp.rend());
            int v=0;
            for(int i=0;i<temp.size();i++){
                v=v*10+temp[i];
            }
            rev.push_back(v);
            res.push_back({v-nums[i],i});
        }
        sort(res.rbegin(),res.rend());
        // for(auto i:res){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        long long ans=0;
        int cnt=0;
        for(auto i:res){
            if(cnt<=k-1){
                ans+=rev[i.second];
                cnt++;
            }
            else{
                ans+=nums[i.second];
            }
        }
        return ans;
        
    }
};
// 210 
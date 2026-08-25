class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        // for(auto i:st)cout<<i;
        int i=k;
        while(true){
            if(i%k==0){
                if(st.find(i)==st.end()){
                    return i;
                }
            }
            i++;
        }

        return 0;
    }
};
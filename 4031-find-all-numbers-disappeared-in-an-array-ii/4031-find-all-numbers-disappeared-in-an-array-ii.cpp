class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        int n=nums.size();
        vector<int>res;
        int i=0;
        sort(nums.begin(),nums.end());
        auto it = std::unique(nums.begin(), nums.end());
        nums.erase(it, nums.end());
        // for(auto i:nums)cout<<i<<" ";
        cout<<endl;
        for(int j=0;j<n;j++){
            if(lower>nums[i]){
                i++;
            }
            else break;
        }
    
        while(lower<=upper&&i<n){
            if(lower!=nums[i]){
                // i++;
                res.push_back(lower);
                lower++;
            }
            else{
                lower++;
                i++;
            }
        }
        while(lower<=upper){
            res.push_back(lower);
                lower++;
            
        }
        vector<vector<int>>fin;
        if(res.size()==0){
            return fin;

        }
        
        int f=0;
        int l=0;
        if(!res.empty()){
        f=res[0];
        l=res[0];
        }
        for(int i=res.size()-1;i>res.size()-4;i--)cout<<res[i];
        res.push_back(res.back());
        for(int i=0;i<res.size()-1;i++){
            // if(res[i]==967)cout<<"found";
            // if(res[i]==res[i+1])continue;
            // l=res[i];
            
            if((res[i]+1)==(res[i+1])){
                // cout<<endl;
                // cout<<res[i]<<res[i+1]<<endl;
                l=res[i];
            }
            
            else{
                // cout<<res[i]<<endl;
                l=res[i];
                fin.push_back({f,l});
                f=res[i+1];
                l=res[i+1];
            }
            
        }
        // l=upper;
        // cout<<l;
        cout<<endl;
        cout<<f<<" "<<l;
        // if(l!=upper){
        // fin.push_back({f,l+1});}
        


        
        return fin;
    }
};
class Solution {
public:
    int maxProduct(int n) {
        int maxi=0;
        int maxi1=0;
        vector<int>res;
        while(n>0){
            int rem=n%10;
            res.push_back(rem);

            
            n=n/10;
        }
        sort(res.begin(),res.end());
        int m=res.size();
        return  res[m-1]*res[m-2];
        
    }
};
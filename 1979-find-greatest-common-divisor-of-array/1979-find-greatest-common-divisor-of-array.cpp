class Solution {
public:
    int calgcd(int a,int b){
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int s=10001;
        int m=0;
        for(int i=0;i<n;i++){
            if(nums[i]>m){
                m=nums[i];
            }
            if(nums[i]<s){
                s=nums[i];
            }
        }
        cout<<s<<m;
        int g=calgcd(s,m);
        return g;
    }
};
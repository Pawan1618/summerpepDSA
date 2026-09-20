class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int sm=0;
        for(int i=0;i<n;i++){
            int temp=('z'-s[i])+1;
            sm+=temp*(i+1);
        }
        return sm;

    }
};
class Solution {
public:
    bool checkDivisibility(int n) {
        int sm=0;
        int num=n;
        int digp=1;
        while(num>0){
            int rem=num%10;
            sm+=rem;
            digp*=rem;
            num=num/10;
        }
        // cout<<digp<<" "<<sm;
        // cout<<digp+sm;
        int fin=digp+sm;
        return n%fin==0;
        
    }
};
class Solution {
public:
    int digp(int n){
        int sm=1;
        while(n>0){
            int rem=n%10;
            sm*=rem;
            n=n/10;
        }
        return sm;
    }
    int smallestNumber(int n, int t) {
        while(true){
            int temp=digp(n);
            if(temp%t==0)return n;
            n++;
        }
    }
};
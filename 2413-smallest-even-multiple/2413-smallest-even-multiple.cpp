class Solution {
public:
    int smallestEvenMultiple(int n) {
        int res=n;
        while(res<=10000){
            if(res%2==0&&res%n==0){
                return res;
            }
            res=res*2;
        }
        return 0;
        
    }
};
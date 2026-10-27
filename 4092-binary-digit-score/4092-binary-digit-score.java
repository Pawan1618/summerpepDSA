class Solution {
    public int calculateScore(int a, int b) {
        int b1=calbin(a);
        int b2=calbin(b);
        if(b1>=b2)return b1*b2;
        return b2/b1;
        
    }
    int calbin(int a){
        int cnt=0;
        while(a>0){
            int rem=a%2;
            cnt+=rem;
            a=a/2;
        }
        return cnt;
    }
}
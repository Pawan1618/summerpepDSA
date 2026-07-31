class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        // cout<<n;
        if(n<=8)return n;
        else if(n>8&&n<=16){
            int temp=n-8;
            return 8+(temp*2);
        }
        else if(n>16 && n<24){
            int temp=n-16;
            return 16+(temp*3)+8;
        }
        else{
            int temp=n-24;
            return 24+(temp*4)+16+8;
        }
        cout<<n;
        return 0;
        
    }
};
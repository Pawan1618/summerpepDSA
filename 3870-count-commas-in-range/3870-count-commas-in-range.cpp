class Solution {
public:
    int countCommas(int n) {


        int cnt=0,res=0,num=n;
        while(n>0){
            int rem=n%10;
            cnt++;
            if(cnt>3){
                res=1;
            }
            n=n/10;
        }
        cout<<res;
        int fin=0;
        while(res>0){
            fin=num-(res*1000);
            return fin+1;
        }
        return fin;
    }
};
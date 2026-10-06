class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        string t="";
        string t2="";
        for(int i=0;i<n;i++){
            if(i%2==0){
                t+='0';
                t2+='1';
            }
            else{
                t+='1';
                t2+='0';
            }
        }
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]){
                cnt1++;
            }
            if(s[i]!=t2[i]){
                cnt2++;
            }
        }
        return min(cnt1,cnt2);
    }
};
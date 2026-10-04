class Solution {
public:
    int minRotations(string s) {
        int n=s.size();
        int cnt=0;
        int cur=0;
        for(int i=0;i<n;i++){
            int temp=s[i]-'0';
            int d=abs(temp-cur);
            int b=10;
            if(abs(temp-cur)>5){
                int x=temp;
                int y=cur;
                if(y>x)swap(x,y);
                b=y+abs(9-x)+1;
            }
            cnt+=min(b,d);
            // cout<<" "<<cur<<endl;
            cur=temp;

        }
        return cnt;
    }
};
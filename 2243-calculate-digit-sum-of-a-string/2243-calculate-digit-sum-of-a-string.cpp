class Solution {
public:
    string digitSum(string s, int k) {
        int n=s.size();
        while(s.size()>k){
            int temp=0;
            string t="";
            int cnt=0;
            for(int i=0;i<s.size();i++){
                temp=temp+s[i]-'0';
                // cout<<s[i]-'0';
                // cout<<temp<<endl;
                cnt++;
                if(cnt==k){
                    
                    t+=to_string(temp);
                    cnt=0;
                    temp=0;
                }
            }
            if(cnt!=0)t+=to_string(temp);
            s=t;
            if(t.size()<=k)return t;
            
        }
        return s;
    }
};
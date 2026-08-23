class Solution {
public:
    bool isPalindromic(string s) {
        vector<int>res;
        string fin="";
        for(int i=0;i<s.size();i++){
            // res.push_back(s[i]);
            int temp=s[i];
            string t="";
            while(temp>0){
                int rem=temp%2;
                t=to_string(rem)+t;
                temp=temp/2;
            }
            int n=t.size();
            if(n<8){
                while(n!=8){
                    t="0"+t;
                    n++;
                }

            }
            // cout<<t<<endl;
            fin=fin+t;
            // cout<<res[i];
        }
        // cout<<fin;.
        int k=fin.size()-1;
        int i=0;
        while(i<=k){
            if(fin[i]==fin[k]){
                i++;
                k--;
            }
            else{
                return false;
            }

        }

        return true;
        
    }
};
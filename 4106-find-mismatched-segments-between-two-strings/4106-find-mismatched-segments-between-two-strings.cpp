class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {   
        vector<vector<string>>res;
        int n1=s1.size();
        int n2=s2.size();
        bool flag=false;
        string temp="";
         string temp2="";
        for(int i=0;i<n1;i++){

            vector<string>t;
        
            if(s1[i]!=s2[i]){
                temp+=s1[i];
                temp2+=s2[i];
                flag=true;
            }
            if(temp.size()>0){
            if(s1[i]==s2[i]&&flag) {
                t.push_back(temp);
                t.push_back(temp2);
                res.push_back(t);
                temp="";
                temp2="";
                flag=false;
                
            }}

        }
        vector<string>t1;
            if(temp.size()>0){
            if(flag) {
                t1.push_back(temp);
                t1.push_back(temp2);
                res.push_back(t1);
                temp="";
                temp2="";
                flag=false;
                
            }}
        
        return res;
    }
};
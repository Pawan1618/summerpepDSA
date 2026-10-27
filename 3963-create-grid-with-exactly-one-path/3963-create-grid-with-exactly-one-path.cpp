class Solution {
public:
    vector<string> createGrid(int m, int n) {
        // vector<string>res(m,string("#",n));/
        // return res;
        vector<string>res;
        res.push_back(string(n,'.'));
        for(int i=1;i<m;i++){
            string s="";
            for(int j=0;j<=n-1;j++){
                if(j==n-1)s+='.';
                else s+='#';
            }
            res.push_back(s);
        }
        return res;
    }
};
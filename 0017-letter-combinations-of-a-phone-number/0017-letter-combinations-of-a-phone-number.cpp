class Solution {
public:
    vector<string>mp{ "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>res;
    void solve(string &digits,int idx,string&cur){
        if(idx==digits.size()){
            res.push_back(cur);
            return;
        }
        string letter=mp[digits[idx]-'0'];
        for(char ch:letter){
            cur.push_back(ch);
            solve(digits,idx+1,cur);
            cur.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        
        // vector<string>res;
        string cur="";
        solve(digits,0,cur);
        
        return res;
    }
};
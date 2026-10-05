class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp;
        unordered_map<char,char>mp1;
        for(int i=0;i<s.size();i++){
            char a=s[i];
            char b=t[i];
            if(mp.count(a)){
                if(mp[a]!=b){
                    return false;
                }
            }
            if(mp1.count(b)){
                if(mp1[b]!=a){
                    return false;
                }
            }
            mp[a]=b;
            mp1[b]=a;
        }
        return true;
        
    }
};
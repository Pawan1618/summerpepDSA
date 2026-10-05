class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto&c:strs){
            string t=c;
            sort(t.begin(),t.end());
            mp[t].push_back(c);
        }
        vector<vector<string>>ans;
        for(auto&i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
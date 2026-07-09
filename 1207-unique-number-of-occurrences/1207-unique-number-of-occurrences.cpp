class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        set<int>s1;
        for(auto &it:mp){
            int f=it.first;
            int s=it.second;
            if(s1.find(s)!=s1.end()){
                // s1.insert(s);
                return false;
            }
            else{
                s1.insert(s);
            }
        }
        return true;
        
    }
};
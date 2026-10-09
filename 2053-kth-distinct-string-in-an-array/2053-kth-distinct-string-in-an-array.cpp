class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<string>res;
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==1){
            res.push_back(arr[i]);
            }
        }
        string fin="";
        for(int i=0;i<res.size();i++){
            if(i==k-1){
                fin=res[i];
                break;
            }
            if(i>=k)break;
        }
        return fin;
    }
};
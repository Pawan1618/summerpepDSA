class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int>temp=arr;
        sort(arr.begin(),arr.end());
        // arr.erase(unique(arr.begin(), arr.end()), arr.end());
        map<int,int>mp;
        int cnt=1;
        for(int i=0;i<n;i++){
            if (mp.find(arr[i]) == mp.end()) {
            mp[arr[i]] =cnt;
            cnt++;
         }
        }
        for(int i=0;i<n;i++){
            temp[i]=mp[temp[i]];
        }
        return temp;
        
    }
};
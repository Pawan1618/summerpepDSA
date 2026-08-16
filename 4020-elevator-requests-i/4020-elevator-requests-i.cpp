class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int sm=0;
        int prev=0;
        int n1=requests.size();
        for(int i=0;i<n1;i++){
            sm+=abs(requests[i]-prev);
            prev=requests[i];

        }
        return sm;
    }
};
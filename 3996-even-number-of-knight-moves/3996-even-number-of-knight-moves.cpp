class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int s=start[0]+start[1];
        int l=target[0]+target[1];
        return (s%2==l%2);
        
    }
};
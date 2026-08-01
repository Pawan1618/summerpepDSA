class Solution {
public:
    bool solve(int i, int j, int f, int s, bool firstTurn, vector<int>& nums) {
        if (i > j) return f >= s;

        if (firstTurn) {
            bool takeLeft = solve(i + 1, j, f + nums[i], s, false, nums);
            bool takeRight = solve(i, j - 1, f + nums[j], s, false, nums);

            return takeLeft || takeRight;    
        } else {
            bool takeLeft = solve(i + 1, j, f, s + nums[i], true, nums);
            bool takeRight = solve(i, j - 1, f, s + nums[j], true, nums);

            return takeLeft && takeRight; 
        }
    }

    bool predictTheWinner(vector<int>& nums) {
        return solve(0, nums.size() - 1, 0, 0, true, nums);
    }
};
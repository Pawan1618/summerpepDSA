class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end());

        if (mn % 2 == 0) {
            // if any odd exists → impossible
            for (int x : nums) {
                if (x % 2 == 1) return false;
            }
        }

        return true;
    }
};
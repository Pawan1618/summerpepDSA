class Solution {
public:
    vector<string> res;

    void solve(int open, int close, string curr, int n) {
        if (curr.length() == 2 * n) {
            res.push_back(curr);
            return;
        }

        if (open < n)
            solve(open + 1, close, curr + "(", n);

        if (close < open)
            solve(open, close + 1, curr + ")", n);
    }

    vector<string> generateParenthesis(int n) {
        solve(0, 0, "", n);
        return res;
    }
};

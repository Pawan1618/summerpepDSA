class Solution {
public:
    bool checkString(string s) {
        string s1=s;
        sort(s.begin(),s.end());
        return s==s1;
    }
};
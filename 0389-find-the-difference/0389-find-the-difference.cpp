class Solution {
public:
    char findTheDifference(string s, string t) {
        char res = 0;
        for(auto ele : s) res ^= ele;
        for(auto ele : t) res ^= ele;
        return res;
    }
};
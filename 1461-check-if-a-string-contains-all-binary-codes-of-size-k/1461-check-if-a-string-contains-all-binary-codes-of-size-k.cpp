class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int need = 1 << k;  // 2^k
        unordered_set<string> seen;

        for (int i = 0; i + k <= s.size(); i++) {
            string sub = s.substr(i, k);
            if (seen.insert(sub).second) {
                need--;
                if (need == 0) return true; // all codes found early
            }
        }
        return false;
    }
};
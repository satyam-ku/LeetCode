class Solution {
public:
    int lengthOfLastWord(string s) {
    string words;
    vector<string> v;

    stringstream ss(s);

    while (ss >> words) {
        v.push_back(words);
    }
    return v[v.size()-1].length();

    }
};
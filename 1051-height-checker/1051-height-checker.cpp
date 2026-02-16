class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ex;
        for(auto ele : heights){
            ex.push_back(ele);
        }
        sort(ex.begin(),ex.end());
        int count = 0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=ex[i]){
                count++;
            }
        }
        return count;
    }
};
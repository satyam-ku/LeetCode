class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        for(int i=0;i<k;i++){
            int maxf = 0;
            int maxe = -1;
            for(auto &ele : mp){
                if (ele.second > maxf) {
                maxf = ele.second;
                maxe = ele.first;
                }
            }
            ans.push_back(maxe);
            mp.erase(maxe);
        }
        return ans;
    }
};
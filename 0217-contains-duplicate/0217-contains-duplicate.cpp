class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool ans = false;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto &ele: mp){
            if(ele.second!=1){
                ans = true;
            }
        }
        return ans;
    }
};
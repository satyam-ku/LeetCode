class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();
        vector<pair<int,int>> v;   // {value, index}

        for(int i = 0; i < n; i++){
            v.push_back({nums[i], i});
        }

        sort(v.begin(), v.end());  // sort based on values

        int i = 0, j = n - 1;
        while(i < j){
            int sum = v[i].first + v[j].first;

            if(sum == target){
                return {v[i].second, v[j].second};
            }
            else if(sum > target){
                j--;
            }
            else{
                i++;
            }
        }

        return {};
    }
};

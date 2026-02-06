class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum =0;
        int ans = (nums.size()*(nums.size()+1))/2;
        for(auto ele : nums){
            sum += ele;
        }
        
        return ans-sum;

    }
};
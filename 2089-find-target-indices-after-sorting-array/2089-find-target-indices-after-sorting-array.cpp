class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        // int l = 0;
        // int r = nums.size();
        // while(l<=r){
        //     int mid = l +(r-l)/2;
        //     if(nums[mid]==target){
        //         ans.push_back(mid);
        //         break;
        //     }else if(nums[mid] > target){
        //         r =mid -1;
        //     }
        //     else{
        //         l =mid+1;
        //     }
        // }
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
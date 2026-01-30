class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int i = 0;
        int j = 1;
        int n = nums.size(); 
        int count = 1;
        while(j<n){
            if(nums[j]==nums[j-1]){
                j++;
                continue;
            } 
            nums[i+1] = nums[j];
            i++;
            j++;
            count++ ;
        }
        return count;
        
    }
};
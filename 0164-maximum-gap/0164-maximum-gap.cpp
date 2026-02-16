class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n<2){
            return 0;
        }
        else{
            sort(nums.begin(),nums.end());
            int maxx = INT_MIN;
            for(int i=0;i<n-1;i++){
                maxx = max(maxx,abs(nums[i]-nums[i+1]));
            }
            return maxx;
        }
        return 0;
    }
};
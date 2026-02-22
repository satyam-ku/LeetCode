class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for(int i=0;i<=n;i++){
            int num = i;
            int bits = 0;
            while(num!=0){
                num = num & num-1;
                bits++;
            }
            ans[i] = bits;
        }
        return ans;
    }
};
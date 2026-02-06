class Solution {
public:
    int mySqrt(int x) {
        int l = 0;
        int r = x;
        int ans = 0;
        while(l<=r){
            int m = l +(r-l)/2;
            long long mid = (long long)m;
            long long y =(long long)x;
             if(mid*mid == y){
                return mid;
            }
            else if(mid*mid > y) {
                r = mid -1;
            }else{
                l = mid + 1;
            }
        }
        return r;
    }
};
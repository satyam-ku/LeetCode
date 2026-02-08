class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int idx =-1;
        // for(int i=1;i<=n-2;i++){
        //     if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
        //         idx = i;
        //         break;
        //     }
        // }
        int l = 1;
        int r = n-2;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                idx = mid;
                return mid;
            }
            else if(arr[mid]>arr[mid+1]){
                r = mid -1;
            }else{
                l =mid+1;
            }
        }
        return idx;
    }
};
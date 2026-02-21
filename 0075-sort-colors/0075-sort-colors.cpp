class Solution {
public:
    void merge(vector<int>& a, vector<int>& b, vector<int>& v){
        int i=0, j=0, k=0;
        while(i<a.size() && j<b.size()){
            if(a[i]<b[j]){
                v[k++] = a[i++];
            }else{
                v[k++] = b[j++];
            }
        }
        while(i<a.size()){
            v[k++] = a[i++];
        }
        while(j<b.size()){
            v[k++] = b[j++];
        }
    }
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return;
        int n1 = n/2;
        int n2 = n - n/2;
        vector<int> a(n1), b(n2);
        for(int i=0;i<n1;i++){
            a[i] = nums[i];
        }
        for(int i=0;i<n2;i++){
            b[i] = nums[n1+i];
        }
        sortColors(a);
        sortColors(b);
        merge(a,b,nums);
        a.clear(); b.clear();

    }
};
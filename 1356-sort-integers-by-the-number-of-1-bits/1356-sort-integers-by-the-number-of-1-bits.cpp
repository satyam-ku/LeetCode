class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        unordered_map<int, int> bitCount;

        for (int ele : arr) {
            int temp = ele;
            int bits = 0;
            while (temp > 0) {
                temp = temp & (temp - 1);
                bits++;
            }
            bitCount[ele] = bits;
        }
     
        sort(arr.begin(), arr.end(), [&](int a, int b) {
            if (bitCount[a] == bitCount[b])
                return a < b;                  
            return bitCount[a] < bitCount[b];
        });

        return arr;
    }
};
class Solution {
public:
    string toBinary(int n) {
        string bin = "";
        while (n > 0) {
            bin += char('0' + (n % 2));
            n /= 2;
        }

        reverse(bin.begin(), bin.end());

        // pad to 32 bits
        while (bin.size() < 32) bin = '0' + bin;
        return bin;
    }

    string reverseBinary(string s) {
        reverse(s.begin(), s.end());
        return s;
    }

    int binaryToDecimal(string s) {
        int result = 0;
        for (char c : s) {
            result = (result << 1) + (c - '0');
        }
        return result;
    }

    int reverseBits(int n) {
        string bin = toBinary(n);     // 32-bit binary
        string rev = reverseBinary(bin);
        return binaryToDecimal(rev);
    }
};
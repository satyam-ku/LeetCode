class Solution {
public:
    bool isPrime(int n) {
        if(n <= 1) return false;
        for(int i=2;i*i <= n;i++){
            if(n%i == 0){
                return false;
            }
        }   
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for(int num = left; num <= right; num++) {
            int n = num;
            int bits = 0;
            while(n!=0){
                n = (n & (n-1));
                bits++;
            }
            if(isPrime(bits)) count++;
        }
        return count;
    }
};
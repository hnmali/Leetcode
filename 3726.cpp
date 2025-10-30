class Solution {
public:
    long long removeZeros(long long n) {
        long long ans = 0, place = 1; 
        while (n) {
            long long rem = n % 10;
            if (rem != 0) {
                ans += rem * place; 
                place *= 10;
            }
            n /= 10;
        }

        return ans;
    }
};

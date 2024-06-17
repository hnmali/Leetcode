class Solution {
public:
    int baseConversion(int n, int k) {
        int newNum = 0;
        while (n >= k) {
            int rem = n % k;
            newNum = newNum * 10 + rem;
            n /= k;
        }
        newNum = newNum * 10 + n;
        return newNum;
    }
    int sumBase(int n, int k) {
        if (n != 10)
            n = baseConversion(n,k);
        int ans = 0;
        while (n) {
            int rem = n % 10;
            ans += rem;
            n /= 10;
        }
        return ans;
    }
};

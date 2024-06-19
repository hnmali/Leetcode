class Solution {
public:
    int totalMoney(int n) {
        int ans = 0,a=1;
        while (n > 7) {
            ans += 7*(2*a+6)/2;
            n -= 7;
            a++;
        }
        ans += n * (2 * a + (n - 1)) / 2;
        return ans;
    }
};

class Solution {
public:
    int arrangeCoins(int n) {
        int ans = 0, i = 1;
        while(n > 0) {
            if(n < i)
                break;
            n -= i;
            ans++;
            i++;
        }
        return ans;
    }
};

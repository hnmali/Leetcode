class Solution {
public:
    int countSetBits(int num) {
        int ans = 0;
        while (num) {
            if (num&1)
                ans++;
            num >>= 1;
        }
        return ans;
    }
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for (int i = left; i <= right; i++) {
            int temp = countSetBits(i);
            if (temp == 2 || temp == 3 || temp == 5 || temp == 7
                || temp == 11 || temp == 13 || temp == 17 || temp == 19)
                ans++;
        }
        return ans;
    }
};

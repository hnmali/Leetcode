class Solution {
public:
    int countDigits(int num) {
        int ans = 0, copy = num;
        while (num) {
            int rem = num % 10;
            if (copy % rem == 0)
                ans++;
            num /= 10;
        }
        return ans;
    }
};

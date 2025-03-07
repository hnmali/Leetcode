class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> nums(right + 1, true);
        nums[0] = nums[1] = false;
        for (int i = 2; i * i <= right; i++) {
            if (nums[i]) {
                for (int j = i * i; j <= right; j += i)
                    nums[j] = false;
            }
        }
        int prev = -1, currL = -1, currR = -1;
        int minDiff = right - left + 1;
        for (int i = left; i <= right; i++) {
            if (nums[i]) {
                if (prev != -1 && (i - prev < minDiff)) {
                    currL = prev;
                    currR = i;
                    minDiff = i - prev;
                }
                prev = i;
            }
        }
        if (currL == -1 || currR == -1)
            return {-1, -1};
        return {currL, currR};
    }
};

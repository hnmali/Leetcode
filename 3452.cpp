class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int sum = 0, n = nums.size();

        for (int i = 0; i < n; i++) {
            bool isGood = true;

            // Check left neighbor (i - k)
            if (i - k >= 0 && nums[i] <= nums[i - k]) {
                isGood = false;
            }

            // Check right neighbor (i + k)
            if (i + k < n && nums[i] <= nums[i + k]) {
                isGood = false;
            }

            if (isGood) sum += nums[i];
        }

        return sum;
    }
};

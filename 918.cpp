class Solution {
public:
    int maxSumNormal(vector<int>& nums) {
        int currSum = nums[0], ans = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            currSum = max(nums[i],nums[i]+currSum);
            ans = max(currSum, ans);
        }
        return ans;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int normalSum = maxSumNormal(nums);
        if (normalSum < 0)
            return normalSum;
        int numsSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            numsSum += nums[i];
            nums[i] = -nums[i];
        }
        int circularSum = maxSumNormal(nums) + numsSum;
        return max(normalSum, circularSum);
    }
};

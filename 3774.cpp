class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int maxSum = 0, minSum = 0;
        for(int i = 0; i < k; i++) {
            minSum += nums[i];
            maxSum += nums[nums.size() - 1 - i];
        }
        return abs(maxSum-minSum);
    }
};

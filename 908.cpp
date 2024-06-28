class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mx = nums[0], mn = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            mx = max(nums[i],mx);
            mn = min(nums[i],mn);
        }
        return max(0, mx - mn - 2 * k);
    }
};

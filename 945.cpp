class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= nums[i-1]) {
                int temp = nums[i-1] - nums[i] + 1;
                nums[i] += temp;
                ans += temp;
            }
        }
        return ans;
    }
};

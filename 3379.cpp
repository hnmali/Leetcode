class Solution {
public:
    int value(const vector<int>& nums, int i, bool direction) {
        int n = nums.size(), steps = abs(nums[i]);
        if (direction)
            i = (i + steps) % n;
        else
            i = (i - steps % n + n) % n;
        return nums[i];
    }
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0)
                ans[i] = value(nums, i, true);
            else if (nums[i] < 0)
                ans[i] = value(nums, i, false);
            else
                ans[i] = 0;
        }
        return ans;
    }
};

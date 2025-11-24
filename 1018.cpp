class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans(nums.size());
        int prefix = 0;
        for (int i = 0; i < nums.size(); i++) {
            prefix = ((prefix << 1) + nums[i]) % 5;
            ans[i] = prefix == 0;
        }
        return ans;
    }
};

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int ans = 0, sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] < nums[i]) {
                sum += nums[i];
            }
            else {
                if (sum > ans)
                    ans = sum;
                sum = nums[i];
            }
        }
        if (sum > ans)
            ans = sum;
        return ans;
    }
};

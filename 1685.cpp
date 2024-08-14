class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0), prefixSum(n, 0);
        prefixSum[0] = nums[0];
        for (int i = 1; i < n; ++i) 
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        for (int i = 0; i < n; ++i) {
            int leftSum = (i > 0) ? prefixSum[i - 1] : 0;
            int rightSum = prefixSum[n - 1] - prefixSum[i];
            ans[i] += i * nums[i] - leftSum;
            ans[i] += rightSum - (n - i - 1) * nums[i];
        }
        return ans;
    }
};

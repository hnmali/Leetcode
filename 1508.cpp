class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> sum;
        for (int i = 0; i < n; ++i) {
            int currentSum = 0;
            for (int j = i; j < n; ++j) {
                currentSum += nums[j];
                sum.push_back(currentSum);
            }
        }
        sort(sum.begin(), sum.end());
        int ans = 0;
        for (int i = left-1; i < right; i++) {
            ans += sum[i];
            ans %= 1000000007;
        }
        return ans;
    }
};

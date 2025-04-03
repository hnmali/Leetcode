class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size(), k = 0;
        vector<int> prefixMax(n), suffixMax(n);
        prefixMax[k] = nums[k];
        for (int i = 1; i < nums.size(); i++) {
            if (prefixMax[k] < nums[i])
                k = i;
            prefixMax[i] = nums[k];
        }
        k = n - 1;
        suffixMax[k] = nums[k];
        for (int i = n - 2; i >= 0; i--) {
            if (suffixMax[k] < nums[i])
                k = i;
            suffixMax[i] = nums[k];
        }
        long long ans = 0;
        for (int j = 1; j < n - 1; j++) {
            long long curr =
                (long long)(prefixMax[j - 1] - nums[j]) * suffixMax[j + 1];
            ans = max(ans, curr);
        }
        return ans;
    }
};

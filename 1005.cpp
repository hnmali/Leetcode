class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int sum = 0, minm = INT_MAX; 
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0 && k > 0) {
                sum += -nums[i];
                k--;
            } 
            else 
                sum += nums[i];
            minm = min(minm, abs(nums[i])); 
        }
        if (k&1) 
            sum -= 2 * minm;
        return sum;
    }
};

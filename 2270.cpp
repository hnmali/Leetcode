class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        long long sum = 0, currSum = 0;
        for(int i = 0; i < n; i++) 
            sum += nums[i];
        for(int i = 0; i < n-1; i++) {
            currSum += nums[i];
            if(currSum >= (sum-currSum))
                ans++;
        }
        return ans;
    }
};

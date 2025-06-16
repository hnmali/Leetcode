class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int currMin = nums[0], maxDiff = -1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] > currMin)
                maxDiff = max(maxDiff, nums[i]-currMin);
            currMin = min(currMin, nums[i]);
        }
        return maxDiff;
    }
};

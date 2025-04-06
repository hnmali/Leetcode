class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0], currSum =nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] > currSum)
                currSum = max(nums[i],currSum+nums[i]);
            else
                currSum += nums[i];
            sum = max(currSum, sum);
        } 
        return sum;
    }
};

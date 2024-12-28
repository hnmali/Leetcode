class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int minm = abs(nums[0]), ans = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(abs(nums[i]) < minm) {
                minm = abs(nums[i]);
                ans = nums[i];
            }
            if (nums[i] == minm)
                ans = nums[i];
        }
        return ans;
    }
};

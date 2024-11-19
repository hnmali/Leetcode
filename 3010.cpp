class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int temp = nums[0];
        nums[0] = 0;
        sort(nums.begin(),nums.end());
        return nums[1]+nums[2]+temp;
    }
};

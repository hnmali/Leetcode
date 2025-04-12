class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = nums[0];
        for(int i = 1; i < nums.size(); i++)
            sum += nums[i];
        return sum % k;
    }
};

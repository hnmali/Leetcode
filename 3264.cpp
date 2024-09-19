class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--) {
            int minm = nums[0], minI = 0;
            for (int i = 1; i < nums.size(); i++) {
                if (minm > nums[i]) {
                    minm = nums[i];
                    minI = i;
                }
            }
            nums[minI] *= multiplier;
        }
        return nums;
    }
};
